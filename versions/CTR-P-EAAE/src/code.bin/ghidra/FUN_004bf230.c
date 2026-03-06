/**
 * FUN_004bf230.c
 * Source line: 701332
 * Body lines: 6
 */
void FUN_004bf230(int param_1,int param_2)

{
  if (*(char *)(param_2 + 0x18) != '\x02') {
    FUN_0013e7d8(param_1 + 0x24,param_1 + 0x28,param_2 + 0x1c);
    return;
  }
  FUN_0013e7d8(param_1 + 0x18,param_1 + 0x1c,param_2 + 0x1c);
  return;
}
