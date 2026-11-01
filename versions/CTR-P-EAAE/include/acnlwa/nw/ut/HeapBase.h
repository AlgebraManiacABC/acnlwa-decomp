#ifndef ACNLWA_NW_UT_HEAPBASE_H
#define ACNLWA_NW_UT_HEAPBASE_H

#include "acnlwa/nw/ut/HeapNode.h"

namespace nw {
namespace ut {

class HeapBase : public ::nw::ut::HeapNode {
public:
    virtual ~HeapBase();

    void Finalize();
};

}  // namespace ut
}  // namespace nw

#endif  // ACNLWA_NW_UT_HEAPBASE_H
