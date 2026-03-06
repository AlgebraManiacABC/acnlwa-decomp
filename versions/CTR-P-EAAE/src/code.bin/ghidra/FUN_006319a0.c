/**
 * FUN_006319a0.c
 * Source line: 948159
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined1 * FUN_006319a0(Item_t *param_1)

{
  int iVar1;
  Item_t IStack_10;
  undefined1 auStack_c [4];
  
  if (*(int *)((int)param_1 + 0x1028) != 0) {
    Item_CopyAndReturn(&IStack_10,(Item_t *)(*(int *)((int)param_1 + 0x1028) + 0x249a));
    iVar1 = FUN_00335214(auStack_c,&IStack_10,*(undefined4 *)((int)param_1 + 0x1030));
    param_1 = &IStack_10;
    if (iVar1 != 0) {
      param_1 = (Item_t *)FUN_007d0f40(4,auStack_c);
    }
  }
  return (undefined1 *)param_1;
}
