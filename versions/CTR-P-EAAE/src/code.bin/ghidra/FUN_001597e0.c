/**
 * FUN_001597e0.c
 * Source line: 172231
 * Body lines: 8
 */
int FUN_001597e0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x14);
  if ((iVar2 != -1) &&
     (piVar1 = *(int **)(*(int *)(*param_1 + 0xc) + iVar2 * 0x10), param_2 < *piVar1)) {
    return (int)piVar1 + piVar1[param_2 + 1];
  }
  return 0;
}
