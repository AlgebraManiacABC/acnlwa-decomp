/**
 * FUN_00119044.c
 * Source line: 117211
 * Body lines: 9
 */
void * FUN_00119044(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_00301e20(param_1 + 0x17676);
  if (((iVar1 == 0) || (-1 < *(int *)(param_1 + 0x172f0) << 0x1b)) &&
     (iVar1 = FUN_00301e20(param_1 + 0x185f2), iVar1 == 0)) {
    pvVar2 = GET_DAT_0095bf74();
    return pvVar2;
  }
  return (void *)0x1;
}
