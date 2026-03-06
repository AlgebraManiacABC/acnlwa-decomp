/**
 * FUN_006fb378.c
 * Source line: 1055217
 * Body lines: 13
 */
#include "../../../include/types.h"

FUN_006fb378(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x80,uVar1);
  if ((iVar2 != 0) &&
     ((iVar2 = FUN_006fb030(param_5), iVar2 == 0 || iVar2 == 2 || (iVar2 == 5 || iVar2 == 1)))) {
    *param_1 = 7;
    *param_2 = 0xf;
    *param_3 = 8;
    *param_4 = 0xf;
    return 1;
  }
  return 0;
}
