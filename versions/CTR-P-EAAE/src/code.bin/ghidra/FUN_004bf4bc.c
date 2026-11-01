void FUN_004bf4bc(float param_1,int param_2)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  *(float *)(param_2 + 0x3c) = param_1;
  return;
}
