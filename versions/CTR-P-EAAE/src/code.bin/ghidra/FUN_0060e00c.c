/**
 * FUN_0060e00c.c
 * Source line: 924759
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0060e00c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b4fc0(param_2 + 0x108,"G_mpi_00",1);
  FUN_00568630(param_2 + 0x108,param_2 + 0x2c0,uVar1,0);
  FUN_005697e0(param_1,param_2 + 0x2c0);
  (**(code **)(*(int *)(param_2 + 0x108) + 0xc))(param_2 + 0x108);
  uVar1 = FUN_004b4fc0(param_2 + 0x108,"G_mpi_00",1);
  FUN_00568984(param_2 + 0x108,param_2 + 0x2c0,uVar1,0);
  return;
}
