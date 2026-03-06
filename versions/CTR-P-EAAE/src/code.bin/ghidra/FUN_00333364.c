/**
 * FUN_00333364.c
 * Source line: 435162
 * Body lines: 15
 */
void FUN_00333364(int param_1)

{
  int iVar1;
  
  if (cRam0094fff8 == '\0') {
    if (DAT_0094fd2b != '\0') {
      iVar1 = FUN_0023c558(&DAT_0094fd60);
      if (iVar1 == 0) {
        FUN_0081a5a0(param_1 + 0x28,&UNK_003334c4,0);
        return;
      }
      FUN_001e02b4(1);
      FUN_001e025c(1);
    }
    DAT_0094fd14 = 6;
    FUN_0081a5a0(param_1 + 0x28,FUN_003337a0,0);
  }
  return;
}
