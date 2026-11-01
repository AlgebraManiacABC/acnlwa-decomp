#include "../../../include/types.h"

void FUN_0010736e(void)

{
  bool in_CY;
  
  if (in_CY) {
    software_interrupt(0xea06);
  }
  halt_baddata();
}
