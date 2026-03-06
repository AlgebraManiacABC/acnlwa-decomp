/**
 * FUN_004872d8.c
 * Source line: 658203
 * Body lines: 10
 */
void FUN_004872d8(void)

{
  int local_10;
  
  uRam0097e054 = 0;
  local_10 = iRam0097e058;
  FUN_00487fb8(&local_10);
  if (iRam0097e058 != 0) {
    software_interrupt(CloseHandle);
    iRam0097e058 = 0;
  }
  nn::svc::UnmapMemoryBlock(0xaed5b4);
  return;
}
