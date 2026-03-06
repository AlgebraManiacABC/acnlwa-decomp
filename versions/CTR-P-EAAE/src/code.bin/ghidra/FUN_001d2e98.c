/**
 * FUN_001d2e98.c
 * Source line: 237426
 * Body lines: 11
 */
void FUN_001d2e98(float param_1,int param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  
  if (*(float *)(param_2 + 0x238) != param_1) {
    local_20 = param_1;
    local_1c = param_1;
    local_18 = param_1;
    FUN_004ee3e8(param_2 + 0x78,&local_20);
    *(float *)(param_2 + 0x238) = param_1;
  }
  return;
}
