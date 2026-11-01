#include "../../../include/types.h"

byte FUN_00301484(void)

{
  byte bVar1;
  
  bVar1 = bRam0095721c;
  if ((1 < bRam0095721c) && (bRam0095721c != 2)) {
    if (bRam0095721c == 5) {
      bVar1 = 3;
    }
    else {
      bVar1 = 0;
    }
  }
  return bVar1;
}
