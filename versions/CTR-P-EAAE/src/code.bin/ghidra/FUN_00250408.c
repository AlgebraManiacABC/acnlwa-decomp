/**
 * FUN_00250408.c
 * Source line: 302264
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00250408(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 auStack_18 [8];
  
  FUN_004f0e54(param_1 + 0x26c);
  FUN_00250438(param_1 + 0x2dc,param_2);
  piVar1 = (int *)(param_1 + 0x33c);
  FUN_001e5894(auStack_18);
  FUN_0020ae2c(piVar1,param_2,auStack_18);
  if ((*(int *)(param_1 + 0x380) != 0) &&
     ((**(code **)(*piVar1 + 0x14))(piVar1), *(int *)(param_1 + 0x380) != 0)) {
    (**(code **)(*piVar1 + 0x34))(*(undefined4 *)(param_1 + 0x358),piVar1,0);
    FUN_00321b08(*(undefined4 *)(param_1 + 0x35c),*(undefined4 *)(param_1 + 0x360),param_1 + 0x380,
                 *(undefined4 *)(param_1 + 0x364),param_1 + 900);
  }
  *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x37c) + 1;
  return;
}
