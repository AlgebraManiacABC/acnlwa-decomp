/**
 * FUN_002999ac.c
 * Source line: 339494
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002999ac(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x444) = param_2;
  uVar1 = FUN_004b4fc0(param_1 + 0x24c,&UNK_00857c10,1);
  FUN_00568630(param_1 + 0x24c,param_1 + 1000,uVar1,0);
  uVar1 = FUN_004b4fc0(param_1 + 0x24c,"G_triT_00",1);
  FUN_00568630(param_1 + 0x24c,param_1 + 1000,uVar1,0);
  uVar1 = FUN_004b4fc0(param_1 + 0x24c,"G_triB_00",1);
  FUN_00568630(param_1 + 0x24c,param_1 + 1000,uVar1,0);
  FUN_005697e0((float)*(byte *)(param_1 + 0x444),param_1 + 1000);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x24c);
}
