#include "acnlwa/nw/snd/internal/driver/Voice.h"
#include "types.h"

extern "C" {
int FUN_00466720(...);
}

namespace nw {
namespace snd {
namespace internal {
namespace driver {

// was FUN_004cacf8
Voice::Voice()
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// was FUN_004ca1f0
void Voice::AppendWaveBuffer(int param_2, ::nn::snd::CTR::WaveBuffer *param_3, bool param_4)
{
  int param_1 = (int)this;
  FUN_00466720(*(undefined4 *)(param_1 + param_2 * 4),param_3);
  if (param_4 != 0) {
    *(::nn::snd::CTR::WaveBuffer **)(param_1 + 0x1c) = param_3;
  }
  return;
}

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw
