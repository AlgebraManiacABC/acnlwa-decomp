void FUN_002915b0(void)

{
  char cVar1;
  
  cVar1 = DAT_00950708;
  if (DAT_00950708 == '\x02') {
    cVar1 = DAT_0095070d;
  }
  if ((DAT_00950708 == '\x02' && cVar1 == '\0') && (iRam00950718 += 1, 999 < iRam00950718)) {
    iRam00950718 = 999;
  }
  return;
}
