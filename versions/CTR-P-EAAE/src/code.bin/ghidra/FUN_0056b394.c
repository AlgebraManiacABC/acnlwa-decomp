/**
 * FUN_0056b394.c
 * Source line: 812768
 * Body lines: 11
 */
void FUN_0056b394(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_4;
  if (fVar2 != param_1) {
    param_2 = (param_1 - fVar2) * param_2;
    if ((param_2 <= param_3) && (fVar1 = -param_3, param_3 = param_2, param_2 < fVar1)) {
      param_3 = fVar1;
    }
    *param_4 = fVar2 + param_3;
  }
  return;
}
