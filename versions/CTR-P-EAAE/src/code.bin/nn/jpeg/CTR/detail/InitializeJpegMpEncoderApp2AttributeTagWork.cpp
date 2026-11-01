#include "types.h"

extern "C" {
void __rt_memclr_w(...);
}

namespace nn {
namespace jpeg {
namespace CTR {
namespace detail {

struct JpegMpEncoderWorkObj;

// TODO: verify FUN_0047d4ec
void InitializeJpegMpEncoderApp2AttributeTagWork(JpegMpEncoderWorkObj *work)
{
  int param_1 = (int)work;
  __rt_memclr_w(param_1 + 0xb10,0xb4);
  *(int *)(param_1 + 0xa9c) = *(int *)(param_1 + 0xa78) + 1;
  return;
}

}  // namespace detail
}  // namespace CTR
}  // namespace jpeg
}  // namespace nn
