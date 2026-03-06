/**
 * FUN_003d9ab8.c
 * Source line: 550250
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_003d9ab8(int param_1,uint *param_2)

{
  uint uVar1;
  size_t sVar2;
  wchar_t awStack_40 [12];
  
  uVar1 = *param_2;
  FUN_00100f68(awStack_40,0x18,&UNK_0089c440,*param_2 >> 0x1a | (param_2[1] << 0x18) >> 0x12,
               (uVar1 & 0x3c00000) >> 0x16,(uVar1 & 0x3e0000) >> 0x11,(uVar1 & 0x1f000) >> 0xc,
               (uVar1 & 0xfc0) >> 6,uVar1 & 0x3f);
  sVar2 = wcslen(awStack_40);
  FUN_00360d24(param_1,sVar2 + 1);
  FUN_001017e4(*(undefined4 *)(param_1 + 0xc),awStack_40);
  *(size_t *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + sVar2 * 2;
  return param_1;
}
