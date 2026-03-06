/**
 * FUN_002ac6b8.c
 * Source line: 349843
 * Body lines: 6
 */
void FUN_002ac6b8(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x1214);
  if ((*piVar1 == param_2) || (piVar1 = (int *)(param_1 + 0x1218), *piVar1 == param_2)) {
    *piVar1 = 0;
  }
  return;
}
