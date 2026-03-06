/**
 * FUN_004d4b08.c
 * Source line: 717621
 * Body lines: 12
 */
float FUN_004d4b08(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  param_2 = param_2 - param_1;
  if (param_2 != 0.0) {
    param_3 = param_3 - param_1;
    if (param_3 < 0.0) {
      fVar1 = (float)FUN_0077a650(-param_3 / param_2);
      param_3 = param_3 + (fVar1 + 1.0) * param_2;
    }
    fVar1 = (float)FUN_0077a6ec(param_3,param_2);
    param_1 = fVar1 + param_1;
  }
  return param_1;
}
