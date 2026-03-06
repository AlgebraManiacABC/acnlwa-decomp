/**
 * FUN_0012c40c.c
 * Source line: 133080
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_0012c40c(undefined4 param_1,undefined4 param_2)

{
  uptr uVar1;
  undefined4 uVar2;
  
  uVar1 = nn::os::ThreadLocalStorage::GetValue((ThreadLocalStorage *)(iRam009753d0 + 0x40));
  uVar2 = *(undefined4 *)(uVar1 + 0x68);
  *(undefined4 *)(uVar1 + 0x68) = param_2;
  return uVar2;
}
