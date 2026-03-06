/**
 * FUN_0045cd98.c
 * Source line: 625563
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_0045cd98(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0045f438();
  *puVar1 = &UNK_00900f10;
  *(undefined1 *)(puVar1 + 5) = 0xfd;
  if (iRam0097d3e4 != 0) {
    uVar2 = FUN_00427974(iRam0097d3e4,5);
    FUN_00150bb4(uVar2,"StationProtocolReliable send buffer num");
    if (iRam0097d3e4 != 0) {
      uVar2 = FUN_00427974(iRam0097d3e4,6);
      FUN_00150bb4(uVar2,"StationProtocolReliable receive buffer num");
    }
  }
  return puVar1;
}
