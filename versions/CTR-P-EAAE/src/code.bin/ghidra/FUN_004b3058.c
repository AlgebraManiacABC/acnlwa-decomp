/**
 * FUN_004b3058.c
 * Source line: 692071
 * Body lines: 11
 */
void FUN_004b3058(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x10) * 4;
  iVar2 = ((((((((*param_1 + param_1[1]) - 1U & ~(param_1[1] - 1U)) + *(int *)(param_2 + 0x18) * 4 +
               param_1[1]) - 1 & ~(param_1[1] - 1U)) + iVar1 + param_1[1]) - 1 & ~(param_1[1] - 1U))
            + iVar1 + param_1[1]) - 1 & ~(param_1[1] - 1U)) + iVar1;
  *param_1 = iVar2;
  if (param_3 != 0) {
    *param_1 = iVar1 + ((iVar2 + param_1[1]) - 1U & ~(param_1[1] - 1U));
  }
  return;
}
