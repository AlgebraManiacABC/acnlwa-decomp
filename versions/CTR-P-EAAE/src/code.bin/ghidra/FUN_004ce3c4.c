/**
 * FUN_004ce3c4.c
 * Source line: 713222
 * Body lines: 11
 */
void FUN_004ce3c4(int param_1,int param_2)

{
  int *piVar1;
  
  FUN_001408d4(param_1 + 4,param_2 + 0x58);
  FUN_0013e7d8(param_1 + 0x10,param_1 + 0x14,param_2 + 0x58);
  FUN_004ce2d0(param_1,param_2);
  for (piVar1 = (int *)(param_2 + 0x58); (piVar1 != (int *)(param_1 + 8) && (1 < piVar1[-6]));
      piVar1 = (int *)*piVar1) {
    if (piVar1[-6] != 0x7fff) {
      FUN_004ca2dc(piVar1 + -0x16);
    }
  }
  return;
}
