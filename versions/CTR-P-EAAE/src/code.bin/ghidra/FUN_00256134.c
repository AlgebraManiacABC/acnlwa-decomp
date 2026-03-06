/**
 * FUN_00256134.c
 * Source line: 305751
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_00256134(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00521a0c();
  FUN_001e58fc(&local_20,4);
  *(undefined4 *)(param_1 + 0x44) = local_20;
  *(undefined4 *)(param_1 + 0x48) = local_1c;
  *(undefined4 *)(param_1 + 0x4c) = local_18;
  *(undefined4 *)(param_1 + 0x50) = local_14;
  FUN_004ec820(param_1 + 0x18,0);
  FUN_004ee4b4(param_1 + 0x18);
  return 2;
}
