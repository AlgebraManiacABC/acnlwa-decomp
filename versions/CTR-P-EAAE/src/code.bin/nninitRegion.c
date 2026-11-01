extern unsigned int Image$$ZI$$ZI$$Base[];
extern unsigned int Image$$ZI$$ZI$$Limit[];

void nninitRegion(void)
{
    unsigned int *p = Image$$ZI$$ZI$$Base;
    unsigned int *end = Image$$ZI$$ZI$$Limit;
    for (; p < end; p++) *p = 0;
}
