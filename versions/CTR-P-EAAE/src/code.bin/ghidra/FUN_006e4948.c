/**
 * FUN_006e4948.c
 * Source line: 1042331
 * Body lines: 11
 */
int FUN_006e4948(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00566464();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 4) == '\0') {
      FUN_0052bc8c(uRam0095e0b4,0);
    }
    else if (*(char *)(param_1 + 4) == '\x01') {
      FUN_0052bc8c(uRam0095e0b8,0);
    }
  }
  return iVar1;
}
