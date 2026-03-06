/**
 * FUN_0070ee2c.c
 * Source line: 1066279
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0070ee2c(void)

{
  int iVar1;
  
  if (DAT_0094d548 == 0) {
    return 0;
  }
  iVar1 = (int)*(char *)(DAT_0094d548 + 0x789);
  if (DAT_0094cff4 != 0) {
    if ((iVar1 == 0) &&
       ((*(char *)(DAT_0094d548 + 0x788) == '\0' || (*(byte *)(DAT_0094cff4 + 0x124) < 4)))) {
      return 0;
    }
    iVar1 = 1;
  }
  return iVar1;
}
