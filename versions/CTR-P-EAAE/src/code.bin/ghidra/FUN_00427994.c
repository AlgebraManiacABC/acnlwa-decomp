/**
 * FUN_00427994.c
 * Source line: 591335
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00427994(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = puRam0097d3e4;
  if (puRam0097d3e4 != NULL) {
    puVar2 = puRam0097d3e4 + 2;
    *puRam0097d3e4 = &UNK_00900504;
    FUN_002f76ac(puVar2,&UNK_00429ac0,0x68,10);
    FUN_004260c4(puVar1);
    puRam0097d3e4 = NULL;
  }
  return;
}
