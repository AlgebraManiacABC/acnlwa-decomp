/**
 * FUN_005c23c4.c
 * Source line: 871813
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_005c23c4(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  Item_t IStack_14;
  
  iVar1 = FUN_005c33d0(4,0);
  if (((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) &&
     (*(char *)(iVar1 + 0x1a9) == -0x6e)) {
    puVar2 = (undefined4 *)Item_Clear(&IStack_14);
    *puVar2 = *(undefined4 *)(iVar1 + 0x8ca);
    FUN_006609bc(iVar1);
    FUN_00305f44();
    FUN_0068aa1c(iVar1,&IStack_14,0,param_1,0x2b,2,&DAT_00ae5658);
    return 1;
  }
  return 0;
}
