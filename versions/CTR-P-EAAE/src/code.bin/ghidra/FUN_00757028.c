/**
 * FUN_00757028.c
 * Source line: 1112551
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00757028(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = *(short **)(param_2 + 0x1028);
  if ((psVar2 != NULL) &&
     (((*(short *)(param_1 + 0xc) != *psVar2 || (*(char *)(param_1 + 0x20) != (char)psVar2[10])) ||
      (iVar1 = FUN_00100d2c((uint *)(param_1 + 0xe),(uint *)(psVar2 + 1),0x12), iVar1 != 0)))) {
    return 0;
  }
  return 1;
}
