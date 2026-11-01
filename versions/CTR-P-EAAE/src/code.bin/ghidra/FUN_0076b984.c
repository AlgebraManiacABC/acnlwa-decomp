#include "../../../include/types.h"

int FUN_0076b984(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00535a68();
  iVar2 = iVar1;
  if (iVar1 != 0) {
    iVar2 = iVar1 + 4;
    *(undefined1 *)(iVar1 + 0xc) = 0;
    if (*(char *)(iVar1 + 4) == '\0') {
      iVar2 = 0;
    }
  }
  return iVar2;
}
