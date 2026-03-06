/**
 * FUN_008334cc.c
 * Source line: 1241251
 * Body lines: 15
 */
int FUN_008334cc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar1 = param_2;
  iVar2 = param_3;
  if (*param_1 != iVar3) {
    for (; iVar2 != iVar3; iVar2 = iVar2 + 0xc) {
      FUN_003d3a64(iVar1,iVar2);
      iVar1 = iVar1 + 0xc;
    }
    FUN_008332b8(param_1,iVar1,param_1[1]);
    param_1[1] = param_1[1] + ((param_3 - param_2) / 0xc) * -0xc;
  }
  return param_2;
}
