/**
 * FUN_00131a88.c
 * Source line: 138221
 * Body lines: 13
 */
void FUN_00131a88(int param_1)

{
  uptr uVar1;
  int iVar2;
  
  uVar1 = nn::os::ThreadLocalStorage::GetValue((ThreadLocalStorage *)(iRam009753d0 + 0x40));
  if ((*(uptr *)(param_1 + 0x24) == uVar1) && (0 < *(int *)(param_1 + 0x28))) {
    iVar2 = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    FUN_00135740(param_1 + 8);
    iVar2 = 1;
    *(uptr *)(param_1 + 0x24) = uVar1;
  }
  *(int *)(param_1 + 0x28) = iVar2;
  return;
}
