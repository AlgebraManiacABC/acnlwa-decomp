/**
 * FUN_00587450.c
 * Source line: 833079
 * Body lines: 7
 */
void FUN_00587450(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x26) != '\x01') {
          // WARNING: Subroutine does not return
    FUN_00584074();
  }
  iVar1 = FUN_002fb378();
          // WARNING: Subroutine does not return
  FUN_00584074(((60000 - ((*(int *)(iVar1 + 8) >> 0x10) +
                         ((*(int *)(iVar1 + 8) << 0x10) >> 0x18) * 1000)) * 0x1e) / 1000);
}
