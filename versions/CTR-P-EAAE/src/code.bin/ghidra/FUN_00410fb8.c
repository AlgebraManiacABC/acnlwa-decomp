/**
 * FUN_00410fb8.c
 * Source line: 578328
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00410fb8(int param_1)

{
  *(undefined4 *)(param_1 + 0x5c) =
       *(undefined4 *)(iRam00974a64 + (uint)*(byte *)(iRam00974a64 + 0xb5) * 4 + 0xb8);
  FUN_003f983c();
  *(undefined **)(param_1 + 0x24) = &UNK_0041103c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "NexMatchUpdateSessionSettingJob::UpdateSessionSetting";
  return 0;
}
