/**
 * ranqd2_ranged_from_seed_2.c
 * Source line: 807993
 * Body lines: 3
 */
float ranqd2_ranged_from_seed_2(float range)

{
  float ran0_1;
  
  ran0_1 = ranqd2(&ranqd2_seed_2);
  return ran0_1 * range;
}
