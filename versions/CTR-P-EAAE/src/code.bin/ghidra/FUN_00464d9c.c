/**
 * FUN_00464d9c.c
 * Source line: 631648
 * Body lines: 11
 */
void FUN_00464d9c(void)

{
  if ((bRam00974f80 & bRam00974f81) != 0) {
    FUN_00463260(0xaea674,1);
    uRam00974f84 = uRam1ff810c0;
    FUN_00461774(0xaea624);
    bRam00974f81 = 0;
    uRam00974f82 = 0;
    coproc_moveto_Data_Synchronization(0);
    FUN_00128b54(0x974f88);
    return;
  }
  return;
}
