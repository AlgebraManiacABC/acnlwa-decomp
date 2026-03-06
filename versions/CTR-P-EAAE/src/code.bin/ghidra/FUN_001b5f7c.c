/**
 * FUN_001b5f7c.c
 * Source line: 221873
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined1 * FUN_001b5f7c(undefined1 *param_1)

{
  Item_t IStack_10;
  Item_t IStack_c;
  
  *param_1 = 0xff;
  FUN_002d4f3c(param_1 + 2);
  FUN_003059f8(param_1 + 0x304);
  __rt_memclr((undefined4 *)(param_1 + 0xb74),0x22);
  Item_Set(&IStack_10,0x23c6);
  Item_Set(&IStack_c,0x2460);
  FUN_002d4d30(param_1 + 2,&IStack_10);
  FUN_002d5184(param_1 + 2,&IStack_c);
  return (undefined1 *)&IStack_10;
}
