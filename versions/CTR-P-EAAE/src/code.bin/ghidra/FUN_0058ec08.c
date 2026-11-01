#include "../../../include/types.h"

void FUN_0058ec08(uint param_1)

{
  int iVar1;
  
  iVar1 = iRam009524dc;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(byte *)(iVar1 + 0x1b) == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  FUN_0075383c();
  return;
}
