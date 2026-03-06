/**
 * FUN_0055ba48.c
 * Source line: 801867
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0055ba48(void)

{
  float fVar1;
  
  uRam00981cfc = uRam00981cfc * 0xfd43fd + 0xc39ec3;
  for (fVar1 = (float)(longlong)(int)(uRam00981cfc & 0xfffffff) * 3.7252903e-09; fVar1 < 0.0;
      fVar1 = fVar1 + 1.0) {
  }
  for (; 0x3f800000 < (int)fVar1; fVar1 = fVar1 - 1.0) {
  }
  return;
}
