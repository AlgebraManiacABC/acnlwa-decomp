/**
 * FUN_0062d00c.c
 * Source line: 945175
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0062d00c(uint param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL) {
    param_3 = 399;
  }
  if ((((Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL && param_1 < param_3) &&
       (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data + param_1 * 0x22 != NULL)) &&
      (bVar1 = (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data + param_1 * 0x22)[0x1c] >> 4
      , 1 < bVar1)) && (bVar1 != 2 && bVar1 != 3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
