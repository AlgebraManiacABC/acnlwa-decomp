/**
 * FUN_0030bc44.c
 * Source line: 409823
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined1 FUN_0030bc44(uint param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  
  if (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL) {
    param_3 = 399;
  }
  if (((Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL && param_1 < param_3) &&
      (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data + param_1 * 0x22 != NULL)) &&
     (((Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data + param_1 * 0x22)[0x1c] & 0xf) < 3))
  {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
