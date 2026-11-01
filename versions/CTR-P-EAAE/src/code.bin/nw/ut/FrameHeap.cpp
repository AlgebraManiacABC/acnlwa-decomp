#include "acnlwa/nw/ut/FrameHeap.h"

namespace nw {
namespace ut {

FrameHeap::~FrameHeap() {}

// TODO: verify FUN_00140900
void *FrameHeap::Destroy()
{
  Finalize();
  return this;
}

}  // namespace ut
}  // namespace nw
