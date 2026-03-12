#define DAT_001baf44 ((unsigned int *)0x00953F94)

_Bool FUN_001baf2c(unsigned int param_1)

{
	unsigned int * p = DAT_001baf44;
	return (p[1] & 1 << (param_1 & 0xff)) != 0;
}
