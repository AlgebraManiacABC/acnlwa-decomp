#ifndef ACNLWA_SSYS_MA_LYT_DUMMYLAYOUT_H
#define ACNLWA_SSYS_MA_LYT_DUMMYLAYOUT_H

#include "acnlwa/nw/lyt/Layout.h"

namespace ssys {
namespace ma {
namespace lyt {

class DummyLayout : public ::nw::lyt::Layout {
public:
    virtual ~DummyLayout();
    virtual void VF04();
    virtual void VF10();
};

}  // namespace lyt
}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_LYT_DUMMYLAYOUT_H
