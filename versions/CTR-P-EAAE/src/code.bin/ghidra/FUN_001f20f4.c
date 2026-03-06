/**
 * FUN_001f20f4.c
 * Source line: 255245
 * Body lines: 11
 */
void FUN_001f20f4(int param_1)

{
  float local_14;
  float local_10;
  float local_c;
  
  FUN_001cd668(param_1 + 0x5d0,1);
  if (_DAT_0094dfbc != 0) {
    local_14 = *(float *)(_DAT_0094dfbc + 0x14) + _DAT_00ac2be4;
    local_10 = *(float *)(_DAT_0094dfbc + 0x18) + fRam00ac2be8;
    local_c = *(float *)(_DAT_0094dfbc + 0x1c) + fRam00ac2bec;
    FUN_006e9648(0x3fa00000,param_1 + 0x78,0,&local_14,0x9537be,0);
  }
  return;
}
