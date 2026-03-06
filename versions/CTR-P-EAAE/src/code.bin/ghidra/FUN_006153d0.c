/**
 * FUN_006153d0.c
 * Source line: 927753
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_006153d0(undefined4 param_1)

{
  int iVar1;
  
  if (_DAT_00951668 == 0) {
    iVar1 = FUN_00131280(0x10,param_1,4);
    if (iVar1 == 0) {
      puRam0095166c = NULL;
      _DAT_00951668 = 0;
    }
    else {
      puRam0095166c = (undefined4 *)FUN_001320cc(iVar1,param_1,3);
      *puRam0095166c = &UNK_0090aba0;
      _DAT_00951668 = iVar1;
    }
  }
  return _DAT_00951668;
}
