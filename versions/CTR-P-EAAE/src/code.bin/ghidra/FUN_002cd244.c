void FUN_002cd244(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 < *(int *)(param_1 + 0x10c)) {
    do {
      FUN_002e08c8(*(int *)(param_1 + 0x108) + iVar1 * 0x518);
      iVar1 += 1;
    } while (iVar1 < *(int *)(param_1 + 0x10c));
  }
  return;
}
