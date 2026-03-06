/**
 * FUN_004b5938.c
 * Source line: 694203
 * Body lines: 12
 */
void FUN_004b5938(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar1 = param_1[1];
    FUN_001408d4(param_1,iVar1);
    if (iVar1 != 0) {
      FUN_004b4bf8(iVar1 + 0x88);
      FUN_0013ad90(iVar1);
    }
    iVar1 = *param_1;
  }
  return;
}
