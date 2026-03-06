/**
 * FUN_00758070.c
 * Source line: 1113435
 * Body lines: 6
 */
int FUN_00758070(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(param_1 + 0x30) == '\x02' || *(char *)(param_1 + 0x30) == '\x04') {
    iVar1 = param_1;
  }
  return iVar1;
}
