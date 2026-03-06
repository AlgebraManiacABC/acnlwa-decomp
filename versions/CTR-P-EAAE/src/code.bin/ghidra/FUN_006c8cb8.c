/**
 * FUN_006c8cb8.c
 * Source line: 1026366
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006c8cb8(int param_1)

{
  int iVar1;
  
  FUN_00567d60(param_1 + 0x170,_DAT_0094e4b8 + 0x34);
  *(int *)(param_1 + 0x110) = param_1 + 0x170;
  FUN_00569184(param_1 + 0x24,"save_wait.bclyt",0,0x850);
  FUN_005695e4(param_1 + 0x3b8,"save_wait_in.bclan",param_1 + 0x170);
  FUN_005695e4(param_1 + 0x408,"save_wait_out.bclan",param_1 + 0x170);
  FUN_005695e4(param_1 + 0x3e0,"save_wait_wait_save.bclan",param_1 + 0x170);
  iVar1 = FUN_0056878c(param_1 + 0x24,&UNK_0089505c);
  *(byte *)(iVar1 + 0xb7) = *(byte *)(iVar1 + 0xb7) & 0xfe;
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x24);
}
