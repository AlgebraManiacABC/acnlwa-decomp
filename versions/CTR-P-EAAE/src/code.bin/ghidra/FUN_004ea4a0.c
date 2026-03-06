/**
 * FUN_004ea4a0.c
 * Source line: 732102
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004ea4a0(void)

{
  int iVar1;
  
  iVar1 = DAT_00950440;
  if (DAT_00950440 != 0) {
    FUN_00264698(DAT_00950440,iRam00952a38);
    uRam00952a4c = *(undefined4 *)(iRam00952a38 + 0xa4);
    FUN_004ec574(uRam009c90c0);
    FUN_00264668(iVar1,iRam00952a38);
    uRam00952a4c = 0;
  }
  return;
}
