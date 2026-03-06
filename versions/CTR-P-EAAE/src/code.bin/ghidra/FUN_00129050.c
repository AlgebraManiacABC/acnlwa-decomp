/**
 * FUN_00129050.c
 * Source line: 130445
 * Body lines: 13
 */
int FUN_00129050(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = -0x275efc09;
  }
  else {
    software_interrupt(CloseHandle);
    if (iVar1 < 0) {
      FUN_00134250();
    }
    *param_1 = 0;
  }
  return iVar1;
}
