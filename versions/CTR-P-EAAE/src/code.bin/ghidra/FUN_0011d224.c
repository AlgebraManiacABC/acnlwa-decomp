/**
 * FUN_0011d224.c
 * Source line: 120225
 * Body lines: 14
 */
void FUN_0011d224(int param_1,int param_2)

{
  if (cRam00974f60 != '\0') {
    return;
  }
  cRam00974f60 = 1;
  uRam00ae0f6c = 0;
  uRam00ae0f70 = 0;
  uRam00ae0f78 = 0xffffffff;
  uRam00ae0f74 = 0;
  iRam00ae0f68 = 0;
  iRam00ae0f64 = 0;
  FUN_0012f154(0xae0f70);
  iRam00ae0f68 = param_1 + param_2;
  iRam00ae0f64 = param_1;
  return;
}
