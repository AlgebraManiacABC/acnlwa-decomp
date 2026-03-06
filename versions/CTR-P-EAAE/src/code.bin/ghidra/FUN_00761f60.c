/**
 * FUN_00761f60.c
 * Source line: 1121156
 * Body lines: 15
 */
#include "../../../include/types.h"

byte FUN_00761f60(int param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xf0) != 0) {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0xf0) + 0x9ac);
    if (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL) {
      param_3 = 399;
    }
    if (((Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL && uVar2 < param_3) &&
        (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data + uVar2 * 0x22 != NULL)) &&
       (bVar1 = (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data + uVar2 * 0x22)[0x1c],
       bVar1 >> 4 < 8)) {
      return bVar1 >> 4;
    }
  }
  return 0;
}
