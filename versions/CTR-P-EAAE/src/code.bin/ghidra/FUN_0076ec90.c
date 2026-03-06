/**
 * FUN_0076ec90.c
 * Source line: 1131954
 * Body lines: 14
 */
int FUN_0076ec90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + (char)iVar1 + 0x10) != '\0') {
      if (iVar2 == param_2) {
        return (int)(char)iVar1;
      }
      iVar2 += 1;
    }
    iVar1 += 1;
  } while (iVar1 < 0x40);
  return -1;
}
