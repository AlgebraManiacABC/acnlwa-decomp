/**
 * FUN_00607474.c
 * Source line: 921848
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00607474(void)

{
  int tmp;
  undefined4 retVal;
  
  tmp = GET_DAT_00951480_plus4();
  if (((tmp == 0) || (tmp = GET_DAT_00951480_plusC(), tmp != 0)) ||
     (tmp = GET_DAT_00951480_plus10(), tmp != 0x89b00)) {
    retVal = 0;
  }
  else {
    retVal = 1;
  }
  return retVal;
}
