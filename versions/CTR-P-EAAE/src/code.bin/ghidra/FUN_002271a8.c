/**
 * FUN_002271a8.c
 * Source line: 280668
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_002271a8(int param_1)

{
  undefined4 uVar1;
  undefined *puStack_20;
  char *local_1c;
  
  uVar1 = DAT_00952c3c;
  local_1c = "BsStrcCatalog";
  puStack_20 = &DAT_009047f8;
  FUN_0031758c(param_1 + 0x14,0xa000,DAT_00952c3c,&puStack_20,1,0);
  local_1c = "BsStrcCatalogTex";
  puStack_20 = &DAT_009047f8;
  FUN_0031758c(param_1 + 0x1c,0x6400,uVar1,&puStack_20,1,0);
  return 1;
}
