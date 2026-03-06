/**
 * FUN_007580d0.c
 * Source line: 1113473
 * Body lines: 8
 */
int FUN_007580d0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x30);
  iVar2 = 0;
  if ((cVar1 == '\x01' || cVar1 == '\x03') || cVar1 == '\x06') {
    iVar2 = param_1;
  }
  return iVar2;
}
