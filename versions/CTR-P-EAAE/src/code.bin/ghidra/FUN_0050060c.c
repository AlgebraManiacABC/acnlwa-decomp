/**
 * FUN_0050060c.c
 * Source line: 746309
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 * FUN_0050060c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004ff388();
  *puVar1 = &UNK_00903118;
  __rt_memcpy_w(puVar1 + 0x47,param_2,0xe8);
  *(undefined1 *)(puVar1 + 0x81) = 1;
  *(undefined1 *)((int)puVar1 + 0x205) = 0;
  puVar1[6] = puVar1 + 0x47;
  return puVar1;
}
