/**
 * FUN_0027e6cc.c
 * Source line: 326210
 * Body lines: 9
 */
void FUN_0027e6cc(int param_1)

{
  int iVar1;
  
  FUN_00230f24();
  iVar1 = GET_BYTE_00957322();
  if ((iVar1 != 0) && (iVar1 == 1)) {
    FUN_005dc374(param_1 + 0x7c,"NPC_Shisho_Downtown","NPC_Shisho_Downtown");
    return;
  }
  FUN_005dc374(param_1 + 0x7c,"NPC_Shisho_Visit","NPC_Shisho_Visit");
  return;
}
