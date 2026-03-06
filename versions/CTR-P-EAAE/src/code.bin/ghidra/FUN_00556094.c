/**
 * FUN_00556094.c
 * Source line: 798241
 * Body lines: 10
 */
int FUN_00556094(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x60768) != 1) {
    *(int *)(param_1 + 0x60768) = 1;
    nnnstdMemCpy(param_2,param_1 + 0x5fc00,*(int *)(param_1 + 0x60560) << 2);
    uRam0097e6f0 = 0x1c;
    param_2 += *(int *)(param_1 + 0x60560) * 4;
    uRam0097e6f1 = 4;
    uRam0097e6f2 = 0;
    uRam0097e6ec = 0;
  }
  return param_2;
}
