/**
 * FUN_00160dc8.c
 * Source line: 177550
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00160dc8(int param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (1 < uRam0095e314) {
    while (*(int *)(uVar1 * 0xc + 0xad6674) != param_1) {
      uVar1 += 1;
      if (uRam0095e314 <= uVar1) {
        return;
      }
    }
    *(undefined1 *)(uVar1 * 0xc + 0xad6678) = 0;
  }
  return;
}
