/**
 * FUN_0054046c.c
 * Source line: 784692
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0054046c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_00903f98;
  iVar1 = iRam009753c8;
  if (param_1 == puRam009753cc) {
    puRam009753cc = NULL;
    if (*(int **)(iRam009753c8 + 0x28) != NULL) {
      (**(code **)(**(int **)(iRam009753c8 + 0x28) + 4))();
      *(undefined4 *)(iVar1 + 0x28) = 0;
    }
    iRam009753c8 = 0;
  }
  FUN_0013efb4(param_1);
  return;
}
