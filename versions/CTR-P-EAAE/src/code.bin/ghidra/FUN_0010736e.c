/**
 * FUN_0010736e.c
 * Source line: 107928
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0010736e(void)

{
  bool in_CY;
  
  if (in_CY) {
    software_interrupt(0xea06);
  }
          // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
