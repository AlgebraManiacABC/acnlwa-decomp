/**
 * FUN_001511ac.c
 * Source line: 165479
 * Body lines: 5
 */
void FUN_001511ac(int *param_1,int *param_2)

{
  if ((param_1[1] & ~(*param_1 << 1)) < 0 && (param_2[1] & ~(*param_2 << 1)) < 0) {
    FUN_00150d2c(*param_1,param_1[1],param_1[2]);
    FUN_00151074();
  }
  return;
}
