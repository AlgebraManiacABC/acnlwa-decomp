/**
 * FUN_0018cbb4.c
 * Source line: 202861
 * Body lines: 11
 */
#include "../../../include/types.h"

void * FUN_0018cbb4(void)

{
  void *pvVar1;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [28];
  
  FUN_002fb378();
  if (_DAT_00aaf14c != 0) {
    FUN_00116ea4(auStack_4c,10,0);
    FUN_00116ea4(auStack_40,10,0);
    pvVar1 = GET_DAT_0095bf74();
    return pvVar1;
  }
  return (void *)0xa;
}
