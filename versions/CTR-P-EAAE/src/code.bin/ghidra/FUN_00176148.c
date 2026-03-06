/**
 * FUN_00176148.c
 * Source line: 190855
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined1 FUN_00176148(uint param_1)

{
  byte *pbVar1;
  uint num_villagers;
  
  if (Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL) {
    num_villagers = 399;
  }
  if ((Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data != NULL && param_1 < num_villagers)
     && (pbVar1 = Npc_Normal_ConstPack_bin_fileinfo_info.file_struct.data + param_1 * 0x22,
        pbVar1 != NULL)) {
    if (pbVar1[2] < 0x23 && pbVar1[0x1c] >> 4 < 8) {
      return (&UNK_0087fc58)
             [((uint)(pbVar1[0x1c] >> 4) * 2 + (uint)pbVar1[2] * 0x10) -
              ((int)((uint)pbVar1[0x1f] << 0x1c) >> 0x1f)];
    }
  }
  return 0;
}
