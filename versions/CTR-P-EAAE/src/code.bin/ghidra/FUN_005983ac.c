/**
 * FUN_005983ac.c
 * Source line: 845520
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_005983ac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  Fg_t *pFVar3;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(4,uVar1);
  if (iVar2 != 0) {
    iVar2 = FUN_006a5e34();
    pFVar3 = FUN_002feb00(iVar2,param_1,param_2,0);
    if (((pFVar3 != NULL) && (iVar2 = FUN_005a06d4(param_1,param_2,0xa5), iVar2 == -1)) &&
       (iVar2 = FUN_00768dc4(pFVar3,1), iVar2 != 0)) {
      uVar1 = FUN_0059f194(0x1d,pFVar3,pFVar3,&DAT_0095bfdc,param_1,param_2,0,0,0,0,0);
      return uVar1;
    }
  }
  return 0xffffffff;
}
