#include "../../../include/types.h"

bool FUN_0030988c(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00309ef0();
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(param_1 + 9);
  }
  return iVar2 != 0 && cVar1 != '\x03';
}
