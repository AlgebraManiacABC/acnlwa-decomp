/**
 * FUN_00179578.c
 * Source line: 193385
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00179578(int param_1)

{
  int iVar1;
  undefined1 auStack_f8 [100];
  undefined1 auStack_94 [132];
  
  if (((((*(ushort *)(param_1 + 0x34) & 0xff) == 2) && (_DAT_00aaf14c != 0)) &&
      (iVar1 = FUN_0077033c(_DAT_00aaf14c + 0x56f0), iVar1 != 0)) &&
     ((*(int *)(param_1 + 0x30) == 0x84 &&
      (iVar1 = FUN_00519944(param_1,auStack_94,0x84), iVar1 == 0x84)))) {
    FUN_002a70d0(auStack_f8);
    iVar1 = FUN_00482fec(auStack_f8,auStack_94,0x84,&UNK_0087b0c4);
    if (iVar1 != 0) {
      iVar1 = FUN_002fb918();
      FUN_001de99c(iVar1 + 0x16d08,auStack_f8,param_1);
    }
  }
  return 1;
}
