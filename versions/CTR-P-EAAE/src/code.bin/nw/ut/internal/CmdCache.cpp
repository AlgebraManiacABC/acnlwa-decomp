#include "acnlwa/nw/ut/internal/CmdCache.h"
#include "types.h"

extern "C" {
void __rt_memcpy(...);
}

namespace nw {
namespace ut {
namespace internal {

// was FUN_0048b418
void CmdCache::Add(const unsigned int *param_2, unsigned int param_3)
{
  int *param_1 = (int *)this;
  __rt_memcpy((uint *)(*param_1 + param_1[1]),param_2,param_3);
  param_1[1] = param_1[1] + param_3;
  return;
}

}  // namespace internal
}  // namespace ut
}  // namespace nw
