/**
 * FUN_004db8ac.c
 * Source line: 722241
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined8 FUN_004db8ac(undefined4 param_1)

{
  undefined4 *puVar1;
  int local_28 [3];
  undefined1 auStack_1c [16];
  
  puVar1 = (undefined4 *)FUN_003083bc(auStack_1c,param_1,0x15);
  *puVar1 = &DAT_0090aadc;
  puVar1 = (undefined4 *)FUN_003083bc(local_28,DAT_0095386c + 10,0x15);
  *puVar1 = &DAT_0090aadc;
  (**(code **)(local_28[0] + 0x14))(local_28,auStack_1c);
  puVar1 = (undefined4 *)FUN_003083bc(local_28,DAT_0095386c + 10,0x15);
  *puVar1 = &DAT_0090aadc;
  return CONCAT44("receive InputString:",auStack_1c);
}
