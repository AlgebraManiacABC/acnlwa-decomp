/**
 * ranqd2_ranged_with_neg_from_seed_2.c
 * Source line: 808006
 * Body lines: 3
 */
float ranqd2_ranged_with_neg_from_seed_2(float range)

{
  float ran0_1;
  
  ran0_1 = ranqd2(&ranqd2_seed_2);
  return (ran0_1 - 0.5) * range * 2.0;
}
