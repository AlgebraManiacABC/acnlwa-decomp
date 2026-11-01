#include "../../../include/types.h"

undefined4 FUN_004607ac(int param_1)

{
  if ((*(char *)(param_1 + 0xe) == '\0') &&
     ((cRam00aeb990 == '\0' || ('\x02' < (char)(cRam00aeb991 - *(char *)(param_1 + 0xf)))))) {
    return 0;
  }
  return 1;
}
