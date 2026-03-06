/**
 * FUN_00456ecc.c
 * Source line: 621085
 * Body lines: 11
 */
void FUN_00456ecc(void)

{
  int *piVar1;
  
  piVar1 = piRam0097d468;
  if ((piRam0097d468 + -0x40000 < (int *)0x3ff00000) && (piRam0097d468 != NULL)) {
    if (*piRam0097d468 != 0) {
      FUN_004260c4(*piRam0097d468);
      *piVar1 = 0;
    }
    FUN_004260c4(piVar1);
    piRam0097d468 = NULL;
  }
  return;
}
