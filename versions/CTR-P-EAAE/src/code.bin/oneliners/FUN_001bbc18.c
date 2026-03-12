#define DAT_001bbc2c ((unsigned int *)0x00953F94)

unsigned int FUN_001bbc18(void)

{
    unsigned int * p = DAT_001bbc2c;
    return (p[1] & 0x20) >> 5;
}
