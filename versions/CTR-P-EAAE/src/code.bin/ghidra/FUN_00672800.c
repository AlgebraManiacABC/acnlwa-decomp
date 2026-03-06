/**
 * FUN_00672800.c
 * Source line: 979762
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00672800(void)

{
  bool in_CY;
  
  if (!in_CY) {
    software_interrupt(0x800000);
  }
          // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
