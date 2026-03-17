/**
 * FUN_005bb220.c
 * Source line: 867169
 * Body lines: 7
 */
void FUN_005bb220(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_005ba098(param_1 + param_2 * 0x80 + iVar1 * 0x40);
    iVar1 += 1;
  } while (iVar1 < 2);
  return;
}
