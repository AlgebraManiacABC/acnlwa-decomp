#include "../../../include/types.h"

void FUN_00588538(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 4);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x1b);
  }
  if (bVar2 && cVar1 == '\0') {
    if (*(char *)(param_1 + 0x1e) != '\0') {
      return;
    }
    FUN_00589b94();
    FUN_00584074();
  }
  FUN_00584074();
}
