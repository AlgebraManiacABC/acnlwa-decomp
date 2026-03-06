/**
 * FUN_0072d4c0.c
 * Source line: 1084686
 * Body lines: 14
 */
void FUN_0072d4c0(int param_1,int *param_2)

{
  size_t sVar1;
  int *piVar2;
  wchar_t *__s;
  
  __s = *(wchar_t **)(param_1 + 4);
  if (__s != NULL) {
    sVar1 = wcslen(__s);
    piVar2 = (int *)FUN_003619b0(sVar1 + 5);
    *piVar2 = sVar1 + 1;
    *param_2 = (int)(piVar2 + 1);
    FUN_00528860(__s,piVar2 + 1,sVar1 + 1);
    return;
  }
  *param_2 = 0;
  return;
}
