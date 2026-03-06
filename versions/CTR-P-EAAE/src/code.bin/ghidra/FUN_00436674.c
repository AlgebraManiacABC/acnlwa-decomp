/**
 * FUN_00436674.c
 * Source line: 600915
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00436674(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0045f438();
  *puVar1 = &UNK_009007a8;
  *(undefined1 *)(puVar1 + 5) = 0xfd;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}
