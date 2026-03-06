/**
 * FUN_00101784.c
 * Source line: 105107
 * Body lines: 9
 */
char * FUN_00101784(int param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + -1);
  do {
    pcVar1 = pcVar1 + 1;
    if (param_2 == *pcVar1) {
      return pcVar1;
    }
  } while (*pcVar1 != '\0');
  return NULL;
}
