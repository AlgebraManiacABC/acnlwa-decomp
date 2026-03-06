/**
 * FUN_0031b5b8.c
 * Source line: 420696
 * Body lines: 13
 */
int * FUN_0031b5b8(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (*param_1 != iVar1) {
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
    iVar1 = *(int *)(*param_1 + 0x1c) + -1;
    *(int *)(*param_1 + 0x1c) = iVar1;
    if ((iVar1 == 0) && ((__rw_locale_imp *)*param_1 != NULL)) {
      __rw::__rw_locale_imp::~__rw_locale_imp((__rw_locale_imp *)*param_1);
      FUN_002ffb64();
    }
    *param_1 = *param_2;
  }
  return param_1;
}
