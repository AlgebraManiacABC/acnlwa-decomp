/**
 * FUN_00134250.c
 * Source line: 140117
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined8 FUN_00134250(undefined4 param_1,undefined4 param_2)

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
