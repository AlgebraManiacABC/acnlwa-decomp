/**
 * FUN_00116be4.c
 * Source line: 115795
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00116be4(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00315990();
  if (iVar1 != 0) {
    *(ushort *)(param_1 + 0x5348 + *param_2 * 2) =
         *(ushort *)(param_1 + 0x5348 + *param_2 * 2) & ~*(ushort *)(param_2 + 4);
  }
  return 0;
}
