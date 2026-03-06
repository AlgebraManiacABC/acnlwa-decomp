/**
 * FUN_00716894.c
 * Source line: 1070644
 * Body lines: 13
 */
int FUN_00716894(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if ((&UNK_0088f29c)[iVar1] == *(char *)(param_1 + param_2)) {
      return iVar1;
    }
    if ((&UNK_0088f29d)[iVar1] == *(char *)(param_1 + param_2)) break;
    iVar1 += 2;
    if (0x27 < iVar1) {
      return -1;
    }
  }
  return iVar1 + 1;
}
