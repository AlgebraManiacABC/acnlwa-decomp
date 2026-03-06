/**
 * FUN_0075fb94.c
 * Source line: 1119979
 * Body lines: 12
 */
#include "../../../include/types.h"

void * FUN_0075fb94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar1 = _DAT_00aaf14c;
  if ((((_DAT_00aaf14c != 0) &&
       (iVar2 = FUN_00309eb8(*(undefined4 *)(param_1 + 0x1028),_DAT_00aaf14c + 0x55a6,param_3,
                             param_4,param_4), iVar2 != 0)) && (*(char *)(iVar2 + 0xbc) < '\0')) &&
     ((int)((uint)*(byte *)(iVar1 + 0x5701) << 0x1e) < 0)) {
    pvVar3 = GET_DAT_0095bf74();
    return pvVar3;
  }
  return NULL;
}
