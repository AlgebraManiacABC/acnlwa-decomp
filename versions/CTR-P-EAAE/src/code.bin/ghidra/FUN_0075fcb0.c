/**
 * FUN_0075fcb0.c
 * Source line: 1120001
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined1 * FUN_0075fcb0(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  short *psVar3;
  
  psVar3 = *(short **)(param_1 + 0x1028);
  if ((((psVar3 != NULL && _DAT_00aaf14c != 0) && (*psVar3 == *(short *)(_DAT_00aaf14c + 0x55bc)))
      && ((char)psVar3[10] == *(char *)(_DAT_00aaf14c + 0x55d0))) &&
     (iVar1 = FUN_00100d2c((uint *)(psVar3 + 1),(uint *)(_DAT_00aaf14c + 0x55be),0x12), iVar1 == 0))
  {
    puVar2 = GET_DAT_0095bf74();
    return puVar2;
  }
  return &UndefinedInstruction;
}
