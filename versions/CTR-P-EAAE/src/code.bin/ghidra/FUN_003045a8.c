/**
 * FUN_003045a8.c
 * Source line: 401464
 * Body lines: 3
 */
#include "../../../include/types.h"

undefined4 FUN_003045a8(void)

{
  uptr uVar1;
  
  uVar1 = nn::os::ThreadLocalStorage::GetValue((ThreadLocalStorage *)(iRam009753d0 + 0x40));
  return *(undefined4 *)(uVar1 + 0x68);
}
