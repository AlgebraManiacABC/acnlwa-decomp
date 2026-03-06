/**
 * FUN_00400fd8.c
 * Source line: 570589
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 * FUN_00400fd8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004394a4();
  puVar1[0x1b] = 0;
  *puVar1 = &UNK_008ff338;
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  __rt_memclr_w(puVar1 + 2,0x42);
  __rt_memclr((undefined4 *)((int)puVar1 + 0x4a),0x22);
  return puVar1;
}
