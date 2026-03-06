/**
 * FUN_00736864.c
 * Source line: 1091918
 * Body lines: 11
 */
float FUN_00736864(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x48);
  fVar2 = fVar1 / fRam00ae3f38;
  if (cRam1ff81084 != '\0') {
    fVar1 = 0.0;
  }
  if (cRam1ff81084 == '\0') {
    fVar1 = fRam1ff81080;
  }
  return fVar2 * 0.5 * fVar1;
}
