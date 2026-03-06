/**
 * ranqd2_ranged_from_seed_2_dup.c
 * Source line: 807982
 * Body lines: 3
 */
float ranqd2_ranged_from_seed_2_dup(float range)

{
  float fVar1;
  
  fVar1 = ranqd2(&ranqd2_seed_2);
  return fVar1 * range;
}
