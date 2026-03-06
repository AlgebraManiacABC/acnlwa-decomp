/**
 * FUN_002e6944.c
 * Source line: 381667
 * Body lines: 6
 */
cro_container * FUN_002e6944(cro_container *param_1)

{
  param_1->field0_0x0 = (int)&UNK_008f39ec;
  if ((param_1->field_0x14 & 1) != 0) {
    FUN_0013f000(0xabe0ac,param_1);
    param_1->field_0x14 = param_1->field_0x14 & 0xfe;
  }
  return param_1;
}
