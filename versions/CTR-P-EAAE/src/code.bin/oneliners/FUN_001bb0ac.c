#define DAT_001bb0c0 ((unsigned int*)0x00953F94)

unsigned int FUN_001bb0ac(void)

{
	unsigned int * p = DAT_001bb0c0;
	return (p[1] & 0x40) >> 6;
}
