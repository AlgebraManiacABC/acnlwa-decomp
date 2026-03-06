/**
 * FUN_00481874.c
 * Source line: 653836
 * Body lines: 13
 */
void FUN_00481874(int *param_1)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  iVar1 = FUN_00481f60(&local_10);
  if (iVar1 < 0) {
    FUN_00134250();
  }
  if (*param_1 != 0) {
    software_interrupt(CloseHandle);
    *param_1 = 0;
  }
  *param_1 = local_10;
  return;
}
