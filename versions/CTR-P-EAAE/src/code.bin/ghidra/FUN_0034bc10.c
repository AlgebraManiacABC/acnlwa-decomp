/**
 * FUN_0034bc10.c
 * Source line: 448363
 * Body lines: 6
 */
int FUN_0034bc10(int param_1)

{
  nn::svc::UnmapMemoryBlock();
  if (*(int *)(param_1 + 0x14) != 0) {
    software_interrupt(CloseHandle);
    *(int *)(param_1 + 0x14) = 0;
  }
  return param_1;
}
