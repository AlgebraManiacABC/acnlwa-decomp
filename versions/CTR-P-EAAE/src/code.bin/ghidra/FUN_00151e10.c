/**
 * FUN_00151e10.c
 * Source line: 166260
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00151e10(void)

{
  int iVar1;
  
  iVar1 = iRam00975c80;
  if ((iRam00975c80 != 0) &&
     (*(undefined4 *)(iRam00975c80 + 0x2f738) = 0, *(char *)(iVar1 + 0x6b83) != '\0')) {
    *(undefined4 *)(iVar1 + 0x2f754) = 0;
    *(undefined4 *)(iVar1 + 0x2f75c) = 1;
    *(undefined4 *)(iVar1 + 0x2f758) = 0x272;
    *(undefined4 *)(iVar1 + 0x2f730) = 0;
    *(undefined4 *)(iVar1 + 0x2f734) = 0;
    *(undefined4 *)(iVar1 + 0x2f73c) = 0;
    *(undefined4 *)(iVar1 + 0x2f6c4) = 0;
    return 0;
  }
  return 0xfffffffe;
}
