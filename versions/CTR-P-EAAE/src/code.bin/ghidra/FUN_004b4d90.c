/**
 * FUN_004b4d90.c
 * Source line: 693590
 * Body lines: 13
 */
int FUN_004b4d90(int param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != (int *)(param_1 + 4)) {
    do {
      iVar1 = strcmp(param_2,(char *)(piVar2 + 2));
      if (iVar1 == 0) {
        return piVar2[0x22];
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return 0;
}
