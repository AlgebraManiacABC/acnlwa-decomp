/**
 * FUN_001ccd98.c
 * Source line: 234022
 * Body lines: 6
 */
void FUN_001ccd98(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) +
          ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28 + -0x28;
  FUN_001ac668(*(int *)(*(int *)(param_1 + 4) + 0x68) + 4,iVar1 + 0x10,1,
               (int)*(short *)(iVar1 + 0x22),(int)*(short *)(iVar1 + 0x24));
  return;
}
