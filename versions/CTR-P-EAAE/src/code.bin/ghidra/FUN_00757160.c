/**
 * FUN_00757160.c
 * Source line: 1112611
 * Body lines: 15
 */
#include "../../../include/types.h"

byte FUN_00757160(int param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  
  if (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL) {
    param_3 = 399;
  }
  if ((Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL &&
       *(ushort *)(param_1 + 0x22) < param_3) &&
     (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data +
      (uint)*(ushort *)(param_1 + 0x22) * 0x22 != NULL)) {
    bVar1 = (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data +
            (uint)*(ushort *)(param_1 + 0x22) * 0x22)[0x1c] >> 4;
  }
  else {
    bVar1 = 8;
  }
  return bVar1;
}
