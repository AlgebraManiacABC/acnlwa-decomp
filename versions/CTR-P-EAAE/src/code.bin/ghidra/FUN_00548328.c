/**
 * FUN_00548328.c
 * Source line: 789985
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 * FUN_00548328(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0054a728();
  puVar1[0x4d] = &UNK_00904f38;
  *puVar1 = &PTR_DAT_00904f14;
  nnnstdMemCpy(puVar1 + 0x5d,&UNK_008a3b58,0x1c);
  return puVar1;
}
