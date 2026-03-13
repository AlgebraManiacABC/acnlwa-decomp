#define DAT_001e5e84 ((unsigned int*)0x0095213C)

unsigned int FUN_001e5e70(int param_1,int param_2)

{
    unsigned int *p = DAT_001e5e84;
    return (p + (param_1*10))[param_2];
}
