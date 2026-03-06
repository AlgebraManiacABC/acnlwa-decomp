/**
 * FUN_006269ec.c
 * Source line: 940456
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006269ec(uint param_1)

{
  FUN_00308238();
  FUN_0029ce80(DAT_00953864);
  DAT_009506bc = (undefined1)param_1;
  FUN_00582464();
  FUN_00300634(1);
  FUN_0062ad70(DAT_0095362c + 0x2cdc,param_1);
  FUN_00622478(DAT_0095362c + 0x3594,param_1);
  DAT_0094ed72 = ((byte)(1 << (param_1 & 0xff)) | DAT_0094ed72) & ~(byte)(1 << (param_1 + 4 & 0xff))
  ;
  return;
}
