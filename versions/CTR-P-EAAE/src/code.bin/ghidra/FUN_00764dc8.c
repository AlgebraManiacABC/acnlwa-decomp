/**
 * FUN_00764dc8.c
 * Source line: 1123492
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00764dc8(int param_1,undefined4 param_2,undefined4 param_3,Item_t param_4)

{
  undefined4 uVar1;
  int iVar2;
  Item_t IStack_10;
  
  IStack_10 = param_4;
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x20,uVar1);
  if (iVar2 != 0) {
    FUN_004e6200(&IStack_10,param_1 + 0x14);
    iVar2 = Item_GetRawID(&IStack_10);
    if (iVar2 - 0x2070U < 2 || iVar2 == 0x2072) {
      return 1;
    }
  }
  return 0;
}
