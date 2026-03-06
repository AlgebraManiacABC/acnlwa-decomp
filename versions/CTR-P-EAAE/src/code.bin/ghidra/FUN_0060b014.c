/**
 * FUN_0060b014.c
 * Source line: 923345
 * Body lines: 9
 */
void FUN_0060b014(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0074fdd0(param_1 + 0x3cc);
  if (iVar1 != 0) {
    FUN_00569420(param_1 + 0x280,param_1 + 0x3cc);
    FUN_0081b004(param_1 + 0x14,FUN_0060b6f0,0);
    return;
  }
  FUN_00569544(param_1 + 0x3cc);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x280);
}
