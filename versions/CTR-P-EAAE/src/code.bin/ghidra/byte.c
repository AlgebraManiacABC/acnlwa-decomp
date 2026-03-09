#include "../../../include/types.h"

extern unsigned long long BYTE_ARRAY_ARRAY_0083b146[][16];
extern ranqd2_ranged_int_from_seed_2(int);

unsigned long long (*FUN_00583778(void))[16]
{
    int ran0_4 = ranqd2_ranged_int_from_seed_2(4);
    return BYTE_ARRAY_ARRAY_0083b146 + ran0_4;
}
