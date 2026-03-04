extern void FUN_00000e84(int, int);
extern void FUN_00000e8c(int, int, int);

#define DAT_000051e0 0x1324

void FUN_00005198(int param_1)
{
  FUN_00000e84(param_1 + 0x5d0, 0);
  *(char *)(param_1 + 0x5cc) = 1;
  FUN_00000e8c(param_1 + 0x78, 0, 1);
  *(char *)(param_1 + 0x5cc) = 0;
  *(char *)(param_1 + DAT_000051e0) = 1;
}
