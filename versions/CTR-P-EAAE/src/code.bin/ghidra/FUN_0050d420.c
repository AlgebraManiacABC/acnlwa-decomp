/**
 * FUN_0050d420.c
 * Source line: 751684
 * Body lines: 14
 */
void FUN_0050d420(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 == 0) {
    return;
  }
  if ((*(char *)(iVar1 + 0x28) != '\x03') &&
     (((*(char *)(iVar1 + 0x28) != '\x05' ||
       (*(int *)(iVar1 + 0x120) != *(int *)(iVar1 + 0x118) ||
        *(int *)(iVar1 + 0x124) != *(int *)(iVar1 + 0x11c))) && (*(char *)(iVar1 + 0x30) == '\0'))))
  {
    return;
  }
  FUN_00131470(iVar1,9,0);
  return;
}
