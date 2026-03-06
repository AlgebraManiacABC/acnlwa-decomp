/**
 * FUN_003040cc.c
 * Source line: 401186
 * Body lines: 9
 */
int FUN_003040cc(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521a10();
  if (iVar1 == 2) {
    FUN_00268c8c(param_1 + 0x78,param_1);
    FUN_001cd810(param_1 + 0x5d0,param_1);
    FUN_001cd690(param_1 + 0x5d0,0);
    iVar1 = 2;
  }
  return iVar1;
}
