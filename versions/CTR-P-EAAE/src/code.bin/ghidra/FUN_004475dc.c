/**
 * FUN_004475dc.c
 * Source line: 609489
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_004475dc(int param_1,char *param_2)

{
  int iVar1;
  
  if ((((param_2 == NULL) || (*param_2 != '\x01')) && (*(char *)(param_1 + 100) != '\x01')) &&
     ((*(int *)(iRam00974a6c + 0xa4) == 0 &&
      ((iVar1 = FUN_00732598(*(undefined4 *)(param_1 + 4)), iVar1 == 0 ||
       (iVar1 = FUN_00732598(*(undefined4 *)(param_1 + 4)), iVar1 == 5)))))) {
    iVar1 = FUN_00430a3c(*(undefined4 *)(param_1 + 4),param_2);
    if (-1 < iVar1) {
      FUN_004282d4(*(undefined4 *)(param_1 + 4),0);
    }
    return iVar1;
  }
  return -0x1f5eb7d9;
}
