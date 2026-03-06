/**
 * FUN_003e20d0.c
 * Source line: 556592
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_003e20d0(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,1);
  if (cRam00974a44 == '\0') {
    param_1[9] = (int)FUN_0042aca4;
    param_1[10] = 0;
    param_1[0xb] = (int)"JoinMeshJob::StartConnectingToHost";
  }
  else {
    param_1[9] = (int)FUN_0042aca4;
    param_1[10] = 0;
    param_1[0xb] = (int)"JoinMeshJob::StartConnectingToHost";
  }
  uRam00ae5a88 = *(undefined4 *)(iRam00974a48 + 0x10);
  return 1;
}
