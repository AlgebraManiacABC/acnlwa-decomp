#include "../../../include/types.h"

uint FUN_006c5744(void)

{
  uint uVar1;
  
  uVar1 = FUN_006c5ad8();
  if (0xfe < uVar1) {
    uVar1 = 0;
  }
  return (*(byte *)(uVar1 + 0x95dd1a) & 8) >> 3;
}
