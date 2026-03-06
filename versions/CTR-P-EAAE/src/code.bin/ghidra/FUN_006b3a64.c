/**
 * FUN_006b3a64.c
 * Source line: 1011063
 * Body lines: 8
 */
void FUN_006b3a64(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_001b07fc(param_1 + 0x860,6,0x3c);
  }
  else {
    FUN_001b08b0(param_1 + 0x860,6);
  }
  *(char *)(param_1 + 0x689) = (char)param_2;
  return;
}
