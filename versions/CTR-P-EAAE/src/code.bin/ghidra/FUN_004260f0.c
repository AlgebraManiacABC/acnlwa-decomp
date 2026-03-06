/**
 * FUN_004260f0.c
 * Source line: 589799
 * Body lines: 13
 */
void FUN_004260f0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = piRam00974a14;
  if (piRam00974a14 != NULL) {
    iVar2 = *piRam00974a14;
    if (iVar2 != 0) {
      FUN_005380a8(iVar2);
      FUN_0053814c(iVar2);
    }
    FUN_004260c4(piVar1);
    piRam00974a14 = NULL;
  }
  return;
}
