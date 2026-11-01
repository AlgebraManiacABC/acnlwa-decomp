size_t wcslen(wchar_t *__s)

{
  size_t sVar1;
  
  sVar1 = 0;
  for (; (short)*__s != 0; __s = (wchar_t *)((int)__s + 2)) {
    sVar1 += 1;
  }
  return sVar1;
}
