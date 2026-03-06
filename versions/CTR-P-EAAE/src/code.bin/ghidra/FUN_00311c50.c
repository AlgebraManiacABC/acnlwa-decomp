/**
 * FUN_00311c50.c
 * Source line: 415053
 * Body lines: 8
 */
int FUN_00311c50(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 100);
  iVar2 = 0;
  if ((cVar1 == '\x01' || cVar1 == '\x03') || cVar1 == '\x06') {
    iVar2 = param_1 + 0x34;
  }
  return iVar2;
}
