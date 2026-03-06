/**
 * FUN_0055b824.c
 * Source line: 801777
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0055b824(int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x1ec) = param_2;
  if (*(int *)(param_1 + 0x28c) == 0) {
    pcVar1 = "ptcl_set.png";
  }
  else if (*(int *)(*(int *)(param_1 + 0x28c) + 4) == *(int *)(param_1 + 0x3c4)) {
    pcVar1 = "ptcl_set_bind.png";
  }
  else {
    pcVar1 = "ptcl_set_bind_error.png";
  }
  (**(code **)(*(int *)(param_1 + 0x114) + 8))(param_1 + 0x114);
  FUN_0030f48c(param_1 + 0x160,"DispName =%s,Icon=%s,Order=%d,Class=PTCLEmitterSet",
               *(char **)(param_1 + 0x118),pcVar1);
  return;
}
