/**
 * FUN_001017c2.c
 * Source line: 105157
 * Body lines: 11
 */
char * FUN_001017c2(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = NULL;
  do {
    cVar1 = *param_1;
    if (cVar1 == param_2) {
      pcVar2 = param_1;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}
