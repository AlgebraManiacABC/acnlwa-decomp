/**
 * FUN_00749010.c
 * Source line: 1104829
 * Body lines: 3
 */
#include "../../../include/types.h"

undefined4 FUN_00749010(void)

{
  uptr uVar1;
  
  uVar1 = nn::os::ThreadLocalStorage::GetValue((ThreadLocalStorage *)(iRam0097d41c + 0x24));
  return *(undefined4 *)(uVar1 + 100);
}
