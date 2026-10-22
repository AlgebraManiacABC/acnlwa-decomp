#include "acnlwa/nn/cec/CTR/Message.h"
#include "types.h"

namespace nn {
namespace cec {
namespace CTR {

// was FUN_00350408
Message::Message()
{
  int param_1 = (int)this;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  InitializeMessage();
}

}  // namespace CTR
}  // namespace cec
}  // namespace nn
