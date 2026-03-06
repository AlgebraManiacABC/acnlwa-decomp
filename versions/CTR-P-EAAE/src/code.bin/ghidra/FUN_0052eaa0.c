/**
 * FUN_0052eaa0.c
 * Source line: 773152
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0052eaa0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x191) == '\0') {
    FUN_0052e858(param_1,"GardenPlus_JisLevel1",1,uRam00952c8c);
  }
  iVar1 = FUN_0052e76c(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x198) = 3;
  }
  return;
}
