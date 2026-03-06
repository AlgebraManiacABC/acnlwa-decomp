/**
 * FUN_005c6e18.c
 * Source line: 875911
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005c6e18(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002fb378();
  iVar2 = FUN_00314278(*puVar1,puVar1[1],puVar1[2],uRam00aaf140,uRam00aaf144,uRam00aaf148);
  if ((iVar2 == 0) && (_DAT_00aaf14c != 0)) {
    FUN_0023d5ec();
    puVar1 = (undefined4 *)FUN_002fb378();
    uRam00aaf140 = *puVar1;
    uRam00aaf144 = puVar1[1];
    uRam00aaf148 = puVar1[2];
  }
  return;
}
