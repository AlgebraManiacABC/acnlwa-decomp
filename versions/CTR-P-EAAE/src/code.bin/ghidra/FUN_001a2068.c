/**
 * FUN_001a2068.c
 * Source line: 210210
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001a2068(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(8,uVar1);
  if (iVar2 != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x30);
    uStack_14 = *(undefined4 *)(param_1 + 0x38);
    FUN_001a1430(*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x2c),param_1 + 0x50,
                 param_2,&local_18,param_1 + 0xe0,param_1 + 0xd8,*(undefined1 *)(param_1 + 0x1a8),
                 *(undefined1 *)(param_1 + 0x1a9),(int)*(short *)(param_1 + 0x1e));
  }
  return;
}
