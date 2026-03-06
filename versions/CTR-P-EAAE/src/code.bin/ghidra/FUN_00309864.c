/**
 * FUN_00309864.c
 * Source line: 407704
 * Body lines: 5
 */
int FUN_00309864(astruct_6 *param_1,int param_2)

{
  if (((param_1->field_0x1739e & 0xf) != 0) &&
     ((param_2 == 0 || ((param_1->field_0x1739e & 0xf) != 1)))) {
    return -1;
  }
  return (int)param_1->field95127_0x1739a;
}
