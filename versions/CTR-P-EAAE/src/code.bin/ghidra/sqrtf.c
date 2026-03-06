/**
 * sqrtf.c
 * Source line: 1168537
 * Body lines: 5
 */
float sqrtf(float __x)

{
  float in_r0;
  
  if ((0x7f800000 - (int)ABS(SQRT(in_r0)) < 0) && (-1 < 0x7f800000 - (int)ABS(in_r0))) {
    in_r0 = (float)__set_errno(1);
  }
  return in_r0;
}
