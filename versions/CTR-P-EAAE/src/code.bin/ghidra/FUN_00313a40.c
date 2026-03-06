/**
 * FUN_00313a40.c
 * Source line: 415938
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00313a40(uint param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL) {
    param_3 = 399;
  }
  if (((Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL && param_1 < param_3) &&
      (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data + param_1 * 0x22 != NULL)) &&
     (((Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data + param_1 * 0x22)[0x1c] & 0xf) == 0)
     ) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
