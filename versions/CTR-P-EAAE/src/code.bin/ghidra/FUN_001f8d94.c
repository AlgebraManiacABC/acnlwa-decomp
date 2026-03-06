/**
 * FUN_001f8d94.c
 * Source line: 258403
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_001f8d94(int param_1)

{
  int iVar1;
  undefined *local_10;
  char *local_c;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    local_c = "BsGeneralObj";
    local_10 = &DAT_009047f8;
    iVar1 = FUN_0031758c(param_1 + 0x14,0xc800,*(undefined4 *)(param_1 + 0x1e8),&local_10,1,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
