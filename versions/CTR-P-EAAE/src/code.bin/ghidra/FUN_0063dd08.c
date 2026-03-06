/**
 * FUN_0063dd08.c
 * Source line: 953925
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0063dd08(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 auStack_38 [20];
  undefined1 auStack_24 [8];
  
  piVar1 = (int *)param_1[0x94];
  if (piVar1 != param_1 && piVar1 != NULL) {
    (**(code **)(*piVar1 + 0x2c))(piVar1,param_2);
    return;
  }
  puVar2 = (undefined4 *)FUN_00307040(auStack_38,10,auStack_24);
  *puVar2 = &UNK_008eb304;
  FUN_00306e58(auStack_38);
  GET_DAT_0095bf74();
  return;
}
