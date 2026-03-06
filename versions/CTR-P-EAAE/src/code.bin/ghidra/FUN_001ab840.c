/**
 * FUN_001ab840.c
 * Source line: 215520
 * Body lines: 12
 */
#include "../../../include/types.h"

bool FUN_001ab840(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  bVar2 = false;
  if (iVar1 != 0) {
    bVar2 = param_1 + 0x33 != NULL;
    if (bVar2) {
      *(undefined1 *)(iVar1 + 0x18) = 1;
      *(int **)(iVar1 + 8) = param_1 + 0x33;
    }
  }
  return bVar2;
}
