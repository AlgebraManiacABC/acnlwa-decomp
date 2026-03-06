/**
 * FUN_005247b8.c
 * Source line: 767189
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_005247b8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &UNK_00903738;
  iVar1 = iRam0095c728;
  if (param_1 == puRam0095c72c) {
    puRam0095c72c = NULL;
    *(undefined **)(iRam0095c728 + 0x60) = &UNK_00909dc8;
    puVar2 = (undefined4 *)(iVar1 + 0x24);
    *puVar2 = &UNK_008fed10;
    FUN_0012fa68(puVar2);
    FUN_00135720(iVar1 + 0x28);
    iRam0095c728 = 0;
  }
  FUN_0013efb4(param_1);
  return;
}
