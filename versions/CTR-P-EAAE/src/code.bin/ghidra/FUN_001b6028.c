/**
 * FUN_001b6028.c
 * Source line: 221892
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined1 * FUN_001b6028(int param_1)

{
  int iVar1;
  Item_t IStack_10;
  Item_t IStack_c;
  
  iVar1 = FUN_002d5278(param_1 + 2);
  iVar1 = FUN_001b4980(iVar1 + 0x302);
  *(undefined1 *)(iVar1 + -0x304) = 0xff;
  FUN_002d4f3c(iVar1 + -0x302);
  FUN_003059f8(iVar1);
  __rt_memclr((undefined4 *)(iVar1 + 0x870),0x22);
  Item_Set(&IStack_10,0x23c6);
  Item_Set(&IStack_c,0x2460);
  FUN_002d4d30(iVar1 + -0x302,&IStack_10);
  FUN_002d5184(iVar1 + -0x302,&IStack_c);
  return (undefined1 *)(iVar1 + -0x304);
}
