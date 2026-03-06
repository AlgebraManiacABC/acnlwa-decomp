/**
 * FUN_00136860.c
 * Source line: 143205
 * Body lines: 12
 */
void FUN_00136860(int *param_1)

{
  int local_8;
  
  local_8 = *(int *)(*param_1 + 0xc4);
  if (local_8 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *param_1 + 0xc4 + local_8;
  }
  if (local_8 != 0) {
    FUN_0013e9e4(&local_8);
  }
  return;
}
