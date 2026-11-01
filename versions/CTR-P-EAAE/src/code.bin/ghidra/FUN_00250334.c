#include "../../../include/types.h"

void FUN_00250334(void)

{
  int iVar1;
  
  iVar1 = FUN_00277fe4();
  *(undefined4 *)(iVar1 + 0xc0) = 0x3f800000;
  *(undefined1 *)(iVar1 + 0xc4) = 0;
  return;
}
