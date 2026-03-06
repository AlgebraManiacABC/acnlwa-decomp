/**
 * FUN_0068f224.c
 * Source line: 995206
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0068f224(void)

{
  int iVar1;
  
  if (((piRam0094edd4 != NULL) && (iVar1 = GET_BYTE_00957322(), iVar1 == 0x5e)) &&
     (DAT_0094edd8 == NULL)) {
    DAT_0094edd8 = piRam0094edd4;
          // WARNING: Could not recover jumptable at 0x0068f264. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piRam0094edd4 + 0xc))();
    return;
  }
  return;
}
