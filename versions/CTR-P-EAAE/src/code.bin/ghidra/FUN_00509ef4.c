/**
 * FUN_00509ef4.c
 * Source line: 749537
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00509ef4(int param_1)

{
  if (pcRam0095e104 != NULL) {
    (*pcRam0095e104)(param_1,uRam0095e108);
  }
  if (param_1 != 0) {
    piRam0095e17c = piRam00ad6604;
  }
  for (; piRam0095e17c != (int *)0xad6604; piRam0095e17c = (int *)*piRam0095e17c) {
    if (*(char *)(piRam0095e17c + 0x61) != '\0') {
      (**(code **)(piRam0095e17c[-1] + 0xc))();
    }
  }
  return;
}
