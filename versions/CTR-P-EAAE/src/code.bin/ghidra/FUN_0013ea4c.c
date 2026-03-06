/**
 * FUN_0013ea4c.c
 * Source line: 151113
 * Body lines: 12
 */
void FUN_0013ea4c(int *param_1)

{
  int local_8;
  
  local_8 = *(int *)(*param_1 + 0x28);
  if (local_8 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *param_1 + 0x28 + local_8;
  }
  if (local_8 != 0) {
    FUN_00140914(&local_8);
  }
  return;
}
