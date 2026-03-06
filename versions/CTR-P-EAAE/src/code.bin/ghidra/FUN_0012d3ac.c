/**
 * FUN_0012d3ac.c
 * Source line: 133926
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0012d3ac(void)

{
  undefined4 *puVar1;
  
  puVar1 = puRam0094ed48;
  if (puRam0094ed48 != NULL) {
    puRam0094ed48 = NULL;
    (**(code **)*puVar1)();
    if (iRam0094ed44 != 0) {
      FUN_002ffb64();
    }
    iRam0094ed44 = 0;
  }
  return;
}
