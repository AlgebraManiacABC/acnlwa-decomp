/**
 * FUN_004a9460.c
 * Source line: 683849
 * Body lines: 12
 */
void FUN_004a9460(int param_1)

{
  int local_8;
  
  local_8 = *(int *)(param_1 + 8);
  if (local_8 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = param_1 + 8 + local_8;
  }
  if (local_8 != 0) {
    FUN_00136764(&local_8);
  }
  return;
}
