char FUN_002f7a24(astruct_4 *param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1->field4_0x10;
  param_1->field4_0x10 = pcVar1 + 1;
  return *pcVar1;
}
