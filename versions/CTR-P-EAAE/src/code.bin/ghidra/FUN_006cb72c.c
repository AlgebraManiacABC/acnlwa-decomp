/**
 * FUN_006cb72c.c
 * Source line: 1028219
 * Body lines: 12
 */
char FUN_006cb72c(int param_1,char param_2)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_1 == 0) {
    cVar1 = '\x12';
  }
  else if (param_1 == 1) {
    cVar1 = '\"';
  }
  else if (param_1 == 2) {
    cVar1 = '2';
  }
  return cVar1 + param_2;
}
