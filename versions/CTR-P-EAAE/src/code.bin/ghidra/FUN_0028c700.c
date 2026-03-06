/**
 * FUN_0028c700.c
 * Source line: 332656
 * Body lines: 12
 */
void FUN_0028c700(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0071ee8c(param_1 + 0x2d78);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x671) == '\x01') {
      FUN_00818210(param_1 + 0x28,FUN_0028bfb4,0);
    }
    else {
      FUN_00818210(param_1 + 0x28,FUN_0028c108,0);
    }
  }
  FUN_0022bf54(param_1 + 0x29e0);
  return;
}
