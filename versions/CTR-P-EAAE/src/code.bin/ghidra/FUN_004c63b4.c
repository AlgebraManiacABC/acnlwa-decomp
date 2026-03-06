/**
 * FUN_004c63b4.c
 * Source line: 706421
 * Body lines: 14
 */
int FUN_004c63b4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x2c;
  FUN_00135748(iVar2);
  if (*(int *)(param_1 + param_2 * 0xc) != 0) {
    iVar1 = *(int *)(param_1 + param_2 * 0xc + 4);
    if (param_3 != 0) {
      FUN_00136718();
    }
    FUN_001357ec(iVar2);
    return iVar1 + -4;
  }
  FUN_001357ec(iVar2);
  return 0;
}
