/**
 * FUN_008155f8.c
 * Source line: 1222876
 * Body lines: 15
 */
void FUN_008155f8(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x128); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    FUN_005b19f8(iVar1 + 0xc);
    FUN_002f73b8(iVar1 + 0x14);
  }
  for (iVar1 = *(int *)(param_1 + 0x140); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    FUN_005b19f8(iVar1 + 0xc);
    FUN_002f73b8(iVar1 + 0x14);
  }
  FUN_00132478(param_1 + 0x124);
  FUN_00132478(param_1 + 0x130);
  FUN_00132478(param_1 + 0x13c);
  FUN_0013f134(param_1 + 0x130,param_1 + 8);
  FUN_002f747c(param_1);
  return;
}
