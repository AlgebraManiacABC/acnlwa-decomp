/**
 * FUN_00101830.c
 * Source line: 105231
 * Body lines: 11
 */
short * FUN_00101830(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  for (psVar2 = param_1; *psVar2 != 0; psVar2 = psVar2 + 1) {
  }
  do {
    sVar1 = *param_2;
    param_2 = param_2 + 1;
    *psVar2 = sVar1;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return param_1;
}
