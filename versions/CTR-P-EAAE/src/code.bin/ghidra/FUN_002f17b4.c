/**
 * FUN_002f17b4.c
 * Source line: 386527
 * Body lines: 14
 */
void FUN_002f17b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xd10);
  iVar3 = *(int *)(param_1 + 0x275c);
  iVar1 = FUN_0075f780(DAT_0095362c + 0x28ec);
  *(int *)(param_1 + 0x2758) = iVar1;
  *(int *)(param_1 + 0x275c) = iVar1;
  iVar2 = param_1 + 0x5f4;
  FUN_00297f04(iVar2,iVar1,0);
  FUN_002982f0(iVar2,(*(int *)(param_1 + 0x2758) + iVar4) - iVar3);
  FUN_00299984(iVar2,0);
  return;
}
