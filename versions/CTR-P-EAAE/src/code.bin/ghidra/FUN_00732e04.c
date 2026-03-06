/**
 * FUN_00732e04.c
 * Source line: 1088604
 * Body lines: 15
 */
short FUN_00732e04(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  sVar3 = 0;
  if (iVar2 != param_1 + 8) {
    do {
      piVar1 = (int *)(iVar2 + 0x14);
      iVar2 = *(int *)(iVar2 + 4);
      if (*piVar1 == param_2) {
        sVar3 += 1;
      }
    } while (iVar2 != param_1 + 8);
  }
  return sVar3;
}
