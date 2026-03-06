/**
 * FUN_0074faec.c
 * Source line: 1106417
 * Body lines: 9
 */
int FUN_0074faec(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00135740(param_1 + 0xc);
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x4c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    iVar2 += *(int *)(iVar1 + 0xc);
  }
  FUN_00137e84(param_1 + 0xc);
  return iVar2;
}
