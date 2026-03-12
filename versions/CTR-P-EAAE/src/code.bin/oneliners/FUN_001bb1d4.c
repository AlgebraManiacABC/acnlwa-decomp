#define DAT_001bb1e8 ((unsigned int *)0x00953F94)

unsigned int FUN_001bb1d4(void)
{
    unsigned int * p = DAT_001bb1e8;
    return (p[1] & 0x10) >> 4;
}
