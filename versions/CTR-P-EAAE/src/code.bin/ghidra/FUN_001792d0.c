/**
 * FUN_001792d0.c
 * Source line: 193256
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined1 FUN_001792d0(uint param_1,undefined4 param_2,uint param_3)

{
  byte *pbVar1;
  
  if (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL) {
    param_3 = 399;
  }
  if ((Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL && param_1 < param_3) &&
     (pbVar1 = Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data + param_1 * 0x22,
     pbVar1 != NULL)) {
    if (pbVar1[2] < 0x23 && pbVar1[0x1c] >> 4 < 8) {
      return (&UNK_0087fa28)
             [((uint)(pbVar1[0x1c] >> 4) * 2 + (uint)pbVar1[2] * 0x10) -
              ((int)((uint)pbVar1[0x1f] << 0x1c) >> 0x1f)];
    }
  }
  return 0;
}
