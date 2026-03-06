/**
 * FUN_00215cb0.c
 * Source line: 273339
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00215cb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(int *)(param_1 + 0x1f48) = param_1 + 0x14;
  FUN_0030f48c(&DAT_00af76f8,"%s.bclyt","itm_balloon",param_4);
  (**(code **)(_DAT_00af76f8 + 8))(&DAT_00af76f8);
  FUN_00569184(param_1 + 0x1e5c,uRam00af76fc,0,0x3000);
  ((undefined *)0x1e68)[param_1] = 4;
  *(undefined4 *)(param_1 + 0x1f88) = 0x41200000;
  *(undefined1 *)(param_1 + 0x1f7c) = 1;
  FUN_0030f48c(&DAT_00af76f8,"%s_%s.bclan","itm_balloon",&UNK_0084629c);
  (**(code **)(_DAT_00af76f8 + 8))(&DAT_00af76f8);
  FUN_005695e4(param_1 + 0x414,uRam00af76fc,param_1 + 0x14);
          // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
