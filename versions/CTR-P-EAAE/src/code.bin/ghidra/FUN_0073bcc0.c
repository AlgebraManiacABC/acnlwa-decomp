/**
 * FUN_0073bcc0.c
 * Source line: 1095287
 * Body lines: 6
 */
void FUN_0073bcc0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 != 0) && (iVar1 != param_2)) {
    FUN_0073bcc0(iVar1);
  }
  return;
}
