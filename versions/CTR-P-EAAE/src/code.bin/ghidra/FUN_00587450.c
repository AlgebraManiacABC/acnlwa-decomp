void FUN_00587450(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x26) != '\x01') {
    FUN_00584074();
  }
  iVar1 = FUN_002fb378();
  FUN_00584074(((60000 - ((*(int *)(iVar1 + 8) >> 0x10) +
                         ((*(int *)(iVar1 + 8) << 0x10) >> 0x18) * 1000)) * 0x1e) / 1000);
}
