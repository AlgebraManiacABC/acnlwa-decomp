/**
 * FUN_007301f4.c
 * Source line: 1086880
 * Body lines: 14
 */
char FUN_007301f4(int param_1)

{
  char cVar1;
  short *psVar2;
  int iVar3;
  
  cVar1 = '\0';
  iVar3 = 0xc;
  psVar2 = (short *)(param_1 + 0x10);
  do {
    if (*psVar2 != *(short *)(param_1 + 0x42)) {
      cVar1 += '\x01';
    }
    iVar3 += -1;
    psVar2 = psVar2 + 1;
  } while (iVar3 != 0);
  return cVar1;
}
