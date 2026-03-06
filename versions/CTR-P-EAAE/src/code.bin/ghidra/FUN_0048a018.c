/**
 * FUN_0048a018.c
 * Source line: 660332
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0048a018(int param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  
  if (param_2 != 0 && param_3 != 0) {
    if (param_1 != 2) {
      return 0xfffffffb;
    }
    pcVar2 = (char *)FUN_00484638(param_2);
    if ((pcVar2 != NULL) &&
       (cVar1 = *pcVar2, piVar3 = (int *)FUN_002f7a10(),
       (*(byte *)(*piVar3 + (int)cVar1) & 0x38) == 0)) {
      return 1;
    }
  }
  return 0;
}
