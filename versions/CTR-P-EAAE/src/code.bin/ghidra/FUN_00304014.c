#include "../../../include/types.h"

void FUN_00304014(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 0xb09);
  if (param_2 == 0) {
    bVar2 = bVar1 & 0xf7 | 2;
  }
  else {
    bVar2 = bVar1 | 10;
  }
  *(byte *)(param_1 + 0xb09) = bVar1 | 2;
  *(byte *)(param_1 + 0xb09) = bVar2;
  return;
}
