/**
 * FUN_00287d58.c
 * Source line: 330467
 * Body lines: 6
 */
void FUN_00287d58(int param_1)

{
  if (*(char *)(param_1 + 0x39a) == '\x01') {
    DAT_0094fd58 &= 0xfffff7ef;
    FUN_005204b0(param_1);
    FUN_00817ff8(param_1 + 0x28,&UNK_00287d48,0);
  }
  return;
}
