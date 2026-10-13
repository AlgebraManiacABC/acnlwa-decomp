# Claude_analysis

Symbols tagged `Claude_analysis` in [`versions/CTR-P-EAAE/symbols/*.csv`](../versions/CTR-P-EAAE/symbols/) were
identified by Claude from the code alone. None is confirmed by a symbol
table, so all are `Placeholder=true`. Note here the evidence for each.

## `__hardfp_*` math functions

These sit directly before `__hardfp_cosf` (named by `bowling`), after
`__ARM_fpclassifyf` (`SM2012`), and in alphabetical order:
`acosf`, `asinf`, `atan2f`, `cosf`. That ordering is consistent with the
members of one runtime library being linked together. Like `__hardfp_cosf`,
all three pass and return floats in VFP registers (the hard-float ABI that
the `__hardfp_` prefix denotes), and each is made up largely of VFP
instructions.

| Address    | Symbol            |
|------------|-------------------|
| `00779d40` | `__hardfp_acosf`  |
| `00779e6c` | `__hardfp_asinf`  |
| `00779fa4` | `__hardfp_atan2f` |

### `__hardfp_acosf`
- Calls `sqrtf` and `__set_errno` (the `EDOM` path for `|x| > 1`).
- Loads `1.570312` (`0x3fc90000`, the high part of π/2) and `3.140625`
  (`0x40490000`, the high part of π): acos returns values in `[0, π]`.
- Uses the same arcsine polynomial coefficients as `__hardfp_asinf`
  (`0.1666667` ≈ 1/6, `0.07498761`, `0.04502022`, `0.0383283`,
  `0.02643336`), since acos is computed through asin.

### `__hardfp_asinf`
- Calls `sqrtf`, `__set_errno` and `__ARM_fpclassifyf`.
- Loads the arcsine series coefficients listed above, starting with 1/6
  (asin x = x + x³/6 + …).

### `__hardfp_atan2f`
- Calls `__ARM_fpclassifyf` to handle the zero, infinity and NaN cases.
- Loads the arctangent series coefficients `-0.3333333` ≈ -1/3, `0.1999831`
  ≈ 1/5, `-0.1422922`, `0.1043559`, `-0.05607336` (atan x = x − x³/3 + x⁵/5
  − …), and `0.463623`, the high part of atan(1/2).
- Unlike `acosf`/`asinf` it never calls `__set_errno`: atan2 has no domain
  error.
