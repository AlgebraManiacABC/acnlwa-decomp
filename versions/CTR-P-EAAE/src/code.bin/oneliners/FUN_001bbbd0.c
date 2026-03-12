#define DAT_001bbbe4 ((unsigned int *)0x00953F94)

unsigned int FUN_001bbbd0(void)
{
    unsigned int * p = DAT_001bbbe4;
    return (p[1] & 0x80) >> 7;
}
