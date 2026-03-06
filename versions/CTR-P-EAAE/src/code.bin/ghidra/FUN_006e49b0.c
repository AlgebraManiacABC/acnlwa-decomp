/**
 * FUN_006e49b0.c
 * Source line: 1042350
 * Body lines: 11
 */
int FUN_006e49b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00566498();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 4) == '\0') {
      FUN_0052bba8(uRam0095e0b4,0);
    }
    else if (*(char *)(param_1 + 4) == '\x01') {
      FUN_0052bba8(uRam0095e0b8,0);
    }
  }
  return iVar1;
}
