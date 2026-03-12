#define DAT_00953f94 (0x00953F94)

unsigned int FUN_001bacc8(void)

{
    unsigned int *ip = (unsigned int*)(DAT_00953f94);
    int i = ip[1];
    i &= 0x100;
    return i >> 8;
}
