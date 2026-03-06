/**
 * FUN_004698e4.c
 * Source line: 635460
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004698e4(int param_1)

{
  *(undefined2 *)(param_1 + 0x1f16) = 0;
  FUN_00418254(param_1);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_1 + 0x42);
  thunk_FUN_00135748(param_1 + 0x1f28);
  if (*(char *)(param_1 + 0x1f26) != '\0') {
    FUN_00425928(param_1 + 0x1f18);
  }
  thunk_FUN_001357ec(param_1 + 0x1f28);
  if (cRam0097e072 == '\0') {
    return;
  }
  FUN_00468cb8();
  FUN_00354584();
  FUN_003545e4();
  return;
}
