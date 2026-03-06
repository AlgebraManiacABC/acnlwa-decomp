/**
 * FUN_00281d6c.c
 * Source line: 327883
 * Body lines: 7
 */
#include "../../../include/types.h"

Item_t * FUN_00281d6c(undefined4 param_1,int param_2)

{
  Item_t IStack_14;
  Item_t IStack_10;
  
  Item_Set(&IStack_14,0x226a);
  Item_Set(&IStack_10,0x2185);
  FUN_00306354(param_1,"Mail_SP_Totakeke",1,param_2 + 0x55a6,&IStack_14,0x13,0);
  FUN_00768138(param_1,&IStack_10,0);
  return &IStack_14;
}
