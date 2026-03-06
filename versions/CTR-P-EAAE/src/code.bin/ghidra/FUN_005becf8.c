/**
 * FUN_005becf8.c
 * Source line: 868989
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_005becf8(int param_1)

{
  uint uVar1;
  uint uVar2;
  Item_t aIStack_20 [2];
  undefined *local_18;
  char *local_14;
  
  Item_Set(aIStack_20,0x33a7);
  FUN_00304f30(aIStack_20,5,0);
  uVar1 = FUN_005364c8(param_1 + 0x2a24,aIStack_20,*(undefined4 *)(param_1 + 0x2c44),9,1,0,1,0);
  local_14 = "Other/flag.bcres";
  local_18 = &DAT_009047f8;
  uVar2 = FUN_00317a50(param_1 + 0x2b38,&local_18,*(undefined4 *)(param_1 + 0x2c44),0x80);
  if ((uVar2 & uVar1) != 0) {
    return 2;
  }
  return 3;
}
