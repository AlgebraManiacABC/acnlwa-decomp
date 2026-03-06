/**
 * FUN_005a5618.c
 * Source line: 853533
 * Body lines: 8
 */
int FUN_005a5618(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005a9e1c(param_1,param_2,0);
  if ((*(int *)(param_1 + param_2 * 0x48 + 0x3c) != 0) &&
     (iVar2 = FUN_005a9e1c(param_1,param_2,1,0), iVar1 == 0)) {
    iVar1 = iVar2;
  }
  return iVar1;
}
