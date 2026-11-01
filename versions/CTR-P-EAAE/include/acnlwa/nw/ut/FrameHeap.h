#ifndef ACNLWA_NW_UT_FRAMEHEAP_H
#define ACNLWA_NW_UT_FRAMEHEAP_H

#include "acnlwa/nw/ut/HeapBase.h"

namespace nw {
namespace ut {

class FrameHeap : public ::nw::ut::HeapBase {
public:
    virtual ~FrameHeap();

    void *Destroy();
};

}  // namespace ut
}  // namespace nw

#endif  // ACNLWA_NW_UT_FRAMEHEAP_H
