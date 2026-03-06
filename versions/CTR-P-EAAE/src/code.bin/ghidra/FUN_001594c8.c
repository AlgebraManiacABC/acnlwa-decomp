/**
 * FUN_001594c8.c
 * Source line: 172033
 * Body lines: 3
 */
int FUN_001594c8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*param_1 + 0xc) + *(int *)(*param_1 + 0x18) * 0x10);
  return *(int *)(iVar1 + 4) * param_2 + iVar1 + 8;
}
