/**
 * FUN_0025a184.c
 * Source line: 306761
 * Body lines: 13
 */
#include "../../../include/types.h"

Item_t * FUN_0025a184(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  Item_t aIStack_1c [4];
  
  iVar3 = _DAT_00aaf14c + 0x2c;
  Item_Clear(aIStack_1c);
  uVar1 = FUN_007234f8(param_1 + 0x464);
  uVar2 = FUN_00712850(iVar3,uVar1);
  FUN_006935a8(aIStack_1c,0x33b5,uVar2,1,0);
  FUN_004e82b4(aIStack_1c);
  FUN_006904b4(aIStack_1c);
  FUN_008177a0(param_1 + 0xa4,FUN_00258e98,0);
  return aIStack_1c;
}
