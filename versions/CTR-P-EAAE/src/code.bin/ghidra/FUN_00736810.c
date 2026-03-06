/**
 * FUN_00736810.c
 * Source line: 1091887
 * Body lines: 8
 */
int FUN_00736810(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[1] == '\0') {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)*(char *)(*param_1 + 0x324);
  }
  return iVar1;
}
