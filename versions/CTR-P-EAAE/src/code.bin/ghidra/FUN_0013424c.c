/**
 * FUN_0013424c.c
 * Source line: 140101
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined8 FUN_0013424c(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = pcRam00974ecc;
  if (pcRam00974ecc != NULL) {
    pcRam00974ecc = NULL;
    (*pcVar1)(0,0,0,0,0,param_2);
  }
  software_interrupt(0x3c);
  return 0;
}
