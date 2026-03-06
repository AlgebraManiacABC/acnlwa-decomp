/**
 * FUN_002e0428.c
 * Source line: 377813
 * Body lines: 12
 */
void FUN_002e0428(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x517) != param_2) {
    *(char *)(param_1 + 0x517) = (char)param_2;
    FUN_004b9b64(param_1 + 0x238,param_1 + 0x3d4);
    if (param_2 == 0) {
      FUN_00569508(param_1 + 0x3d4);
    }
    else {
      FUN_005697e0(0,param_1 + 0x3d4);
    }
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x238);
  }
  return;
}
