/**
 * FUN_0025de40.c
 * Source line: 307968
 * Body lines: 13
 */
void FUN_0025de40(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x7e10) == '\0') {
    iVar1 = FUN_0071ee8c(param_1 + 0x77cc);
    if (iVar1 == 0) {
      FUN_008179b8(param_1 + 0x28,FUN_0025d2c0,0);
      return;
    }
  }
  else {
    FUN_005210a8(param_1);
    FUN_008179b8(param_1 + 0x28,&UNK_0025d0f8,0);
  }
  return;
}
