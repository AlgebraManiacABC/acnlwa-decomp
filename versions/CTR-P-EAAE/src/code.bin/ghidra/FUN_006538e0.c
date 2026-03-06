/**
 * FUN_006538e0.c
 * Source line: 963741
 * Body lines: 6
 */
void FUN_006538e0(int param_1,short *param_2)

{
  if (param_2 != NULL) {
    FUN_006547e4(param_1,(int)*param_2,6,0x1000,0x100);
    return;
  }
  FUN_006547e4(param_1,(int)*(short *)(param_1 + 0x8c2),6,0x1000,0x100);
  return;
}
