/**
 * FUN_002e68f8.c
 * Source line: 381653
 * Body lines: 7
 */
void FUN_002e68f8(cro_container *param_1)

{
  param_1->field0_0x0 = (int)&UNK_008f39ec;
  if ((param_1->field_0x14 & 1) != 0) {
    FUN_0013f000(0xabe0ac,param_1);
    param_1->field_0x14 = param_1->field_0x14 & 0xfe;
  }
  FUN_002ffb64(param_1);
  return;
}
