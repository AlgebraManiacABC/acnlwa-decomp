#include "types.h"

// was FUN_00155230
uint CFLi_IsTemporaryMiiID(byte *param_1)
{
  return (*param_1 & 0x20) >> 5;
}
