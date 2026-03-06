/**
 * FUN_001a79bc.c
 * Source line: 213658
 * Body lines: 12
 */
void FUN_001a79bc(int param_1)

{
  if (*(char *)(param_1 + 0x185d) != '\0') {
    if (iRam00951664 != 0) {
      FUN_0058d310(0);
    }
    FUN_00569544(param_1 + 0x1824);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x117c);
  }
  if (*(char *)(param_1 + 0x185e) == '\0') {
    return;
  }
  FUN_001a8ddc(param_1);
  return;
}
