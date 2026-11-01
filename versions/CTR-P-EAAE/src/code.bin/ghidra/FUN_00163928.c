void FUN_00163928(void)

{
  if (cRam0095e307 != '\0') {
    return;
  }
  if (cRam0095e306 != '\0') {
    nn::svc::SleepThread(16000000);
    cRam0095e306 = '\0';
  }
  return;
}
