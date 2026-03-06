/**
 * FUN_003e64ac.c
 * Source line: 559281
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_003e64ac(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,1);
  if (cRam00974a44 == '\0') {
    param_1[0xb] = (int)"CreateMeshJob::SetupSystemProtocols";
    param_1[9] = (int)FUN_004308fc;
    param_1[10] = 0;
  }
  else {
    param_1[9] = (int)FUN_004308fc;
    param_1[10] = 0;
    param_1[0xb] = (int)"CreateMeshJob::SetupSystemProtocols";
  }
  uRam00ae5a88 = *(undefined4 *)(iRam00974a48 + 0x10);
  return 0;
}
