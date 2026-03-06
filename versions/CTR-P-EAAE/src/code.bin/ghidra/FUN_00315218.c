/**
 * FUN_00315218.c
 * Source line: 417076
 * Body lines: 10
 */
void FUN_00315218(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0071ee8c(param_1 + 0x1250);
  if (iVar1 == 0) {
    if (cRam0094fe94 == '\0') {
      FUN_00819c2c(param_1 + 0x28,FUN_00315374,0);
      return;
    }
    FUN_00819c2c(param_1 + 0x28,FUN_00315ac0,0);
  }
  return;
}
