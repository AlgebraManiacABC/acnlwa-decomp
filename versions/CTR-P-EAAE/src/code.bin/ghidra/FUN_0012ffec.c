void FUN_0012ffec(int param_1)

{
  if (param_1 != 0) {
    FUN_00136480();
  }
  if (pcRam00974b40 != NULL) {
    (*pcRam00974b40)(uRam00974b80);
  }
  if (pcRam00974b44 == NULL) {
    return;
  }
  (*pcRam00974b44)(uRam00974b84);
  return;
}
