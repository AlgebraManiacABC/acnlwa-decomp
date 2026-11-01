#include "acnlwa/nn/cec/CTR/MessageId.h"
#include "types.h"

extern "C" {
void __ARM_common_memclr4_8(...);
}

namespace nn {
namespace cec {
namespace CTR {

// TODO: verify FUN_003504e8
MessageId::MessageId()
{
  __ARM_common_memclr4_8(this);
}

}  // namespace CTR
}  // namespace cec
}  // namespace nn
