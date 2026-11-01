#include "../../../include/types.h"

void FUN_00672800(void)

{
  bool in_CY;
  
  if (!in_CY) {
    software_interrupt(0x800000);
  }
  halt_baddata();
}
