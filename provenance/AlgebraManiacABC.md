# AlgebraManiacABC

Symbols tagged `AlgebraManiacABC` in [`versions/CTR-P-EAAE/symbols/*.csv`](../versions/CTR-P-EAAE/symbols/) were
named by hand. Note here how each name was arrived at.

## Item

These functions all deal with items. For the most part, this is self explanatory.
The item parameters and sources are known from the [ACNL Spreadsheet](https://nookipedia.com/wiki/Community:ACNL_Spreadsheet).

| Address    | Symbol                        |
|------------|-------------------------------|
| `0024a5ec` | `ItemBitfield_Clear`          |
| `002fc20c` | `Item_Clear`                  |
| `002fc288` | `ItemBitfield_ClearAndReturn` |
| `002fc8e8` | `Item_Copy`                   |
| `002fc934` | `Item_CopyAndReturn`          |
| `002fcaf4` | `Item_IsNullItem`             |
| `002fcb10` | `Item_IsValidID`              |
| `002fcb84` | `Item_IsID`                   |
| `002fcb9c` | `Item_GetTopBitOf2`           |
| `002fcbb0` | `Item_Set`                    |
| `0030b654` | `Item_Param11Valid`           |
| `0030b6b8` | `Item_GetRawID`               |
| `00536060` | `Item_GetModelName`           |
| `005361a8` | `Item_GetParam`               |
| `007486fc` | `Item_GetPrice`               |
| `00768360` | `Item_IsFromGracieGrace`      |
| `00768da0` | `Item_GetID`                  |
| `007695d4` | `Item_IsFromWishyOrSpotlight` |
| `00871ac4` | `ModelNames`                  |

## Fg

| Address    | Symbol        | Notes |
|------------|---------------|-------|
| `002fd010` | `Fg_GetParam` |       |
| `0076939c` | `Fg_GetID`    |       |
| `009526e0` | `Fg_Param_Fg_bin_fileinfo` (data) | |

## `*_bin_info` file data

| Address    | Symbol                                    |
|------------|-------------------------------------------|
| `00a1838c` | `Item_bin_info`                           |
| `00a1839c` | `Kind_bin_info`                           |
| `00a183ac` | `Outfit_bin_info`                         |
| `00a183bc` | `Series_bin_info`                         |
| `00a183cc` | `NpcMessage_bin_info`                     |
| `00a83aec` | `Npc_Normal_ConstPack_bin_fileinfo_info`  |
| `00a8413c` | `Npc_Special_ConstPack_bin_fileinfo_info` |

## Villager

| Address    | Symbol                       |
|------------|------------------------------|
| `00301e6c` | `Villager_GetConstPackEntry` |

## `Entry`

| Address    | Symbol  |
|------------|---------|
| `00100000` | `Entry` |

## `CRO0_MAGIC`

| Address    | Symbol       |
|------------|--------------|
| `0034c66c` | `CRO0_MAGIC` |

## GET_* accessors

Functions which just load the mentioned data.

| Address    | Symbol                    |
|------------|---------------------------|
| `001b85b0` | `GET_DAT_00951480_plus4`  |
| `001b98c0` | `GET_DAT_00951480_plus10` |
| `001b98d0` | `GET_DAT_00951480_plusC`  |
| `002f74c8` | `GET_BYTE_00957322`       |
| `002fb328` | `GET_DAT_0095bf74`        |
| `006a6eb0` | `GET_RAM_009526f8`        |

## NOP_* stubs

Functions which just return immediately.

| Address    | Symbol                  |
|------------|-------------------------|
| `0013fa0c` | `NOP_0013fa0c`          |
| `0013fad4` | `NOP_0013fa0c_0013fad4` |
| `002f777c` | `NOP_002f777c`          |
| `002f9e18` | `NOP_002f9e18`          |
| `002fc8fc` | `NOP_002fc8fc`          |
| `003084c8` | `NOP_003084c8`          |
| `007ca670` | `NOP_007ca670`          |
| `00825c60` | `NOP_00825c60`          |
| `008272d8` | `NOP_008272d8`          |

## ranqd* random number generators

Named after the "quick and dirty" generators `ranqd1` and `ranqd2` in
*Numerical Recipes in C*, §7.1. The game's constants match:

- `RAND_A` = `0x0019660d` = 1664525 and `RAND_B` = `0x3c6ef35f` = 1013904223,
  the LCG `idum = 1664525*idum + 1013904223` (constants credited there to
  Knuth and H. W. Lewis).
- `ONE_f` = `0x3f800000` (tagged `Float`), `ranqd2`'s `jflone`: the generator's 23 high bits are
  ORed into it to make a float in [1, 2), and 1.0 is subtracted.

| Address    | Symbol                                    |
|------------|-------------------------------------------|
| `0013bb30` | `ranqd2`                                  |
| `0013bb74` | `RAND_A` (data)                           |
| `0013bb78` | `RAND_B` (data)                           |
| `002fc25c` | `ranqd2_ranged_int_from_seed_1`           |
| `002ff6f8` | `ranqd2_ranged_int_from_seed_2`           |
| `0030e424` | `ranqd2_ranged_from_custom_seed_0030e424` |
| `00565c00` | `ranqd2_skip_next`                        |
| `00565c0c` | `ranqd2_ranged_from_seed_2_dup`           |
| `00565c10` | `ranqd2_ranged_from_seed_2`               |
| `00565c34` | `ranqd2_ranged_with_neg_from_seed_2`      |
| `00565e8c` | `ranqd1`                                  |
| `00565ec8` | `ranqd2_ranged_from_custom_seed`          |
| `00952bdc` | `ranqd2_seed_1` (data)                    |
| `009753e8` | `ranqd2_seed_2` (data)                    |
