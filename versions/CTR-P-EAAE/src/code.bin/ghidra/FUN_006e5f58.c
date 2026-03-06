/**
 * FUN_006e5f58.c
 * Source line: 1043491
 * Body lines: 10
 */
void FUN_006e5f58(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0xaee) != param_2) {
    if (param_2 == 0) {
      FUN_006c9050(param_1 + 0x24);
    }
    else {
      FUN_006c8e30();
    }
    *(char *)(param_1 + 0xaee) = (char)param_2;
  }
  return;
}
