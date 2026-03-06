/**
 * FUN_001594ec.c
 * Source line: 172044
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_001594ec(int *param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(*param_1 + 0x10);
  piVar1 = (int *)(*(int *)(*param_1 + 0xc) + iVar3 * 0x10);
  if (iVar3 != -1) {
    iVar3 = *piVar1;
    pcVar2 = (char *)(param_2 * 0x10 + 0x10 + iVar3);
    if ((pcVar2 != NULL) && (*pcVar2 == '\x02')) {
      return (uint)*(ushort *)(pcVar2 + 0xe) * 2 + 0x10 + iVar3 + (uint)*(ushort *)*piVar1 * 0x10;
    }
  }
  return 0;
}
