/**
 * FUN_0033980c.c
 * Source line: 437434
 * Body lines: 12
 */
void FUN_0033980c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0071ee8c(param_1 + 0x196c);
  if (iVar1 != 0) {
    FUN_002cd174(param_1 + 0x15d4);
    return;
  }
  if (*(char *)(param_1 + 0x8a98) != '\x01') {
    FUN_0081a7b8(param_1 + 0x28,&UNK_00338bb4,0);
    return;
  }
  FUN_0081a7b8(param_1 + 0x28,&UNK_00339034,0);
  return;
}
