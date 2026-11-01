#ifndef ACNLWA_NW_LYT_DRAWER_H
#define ACNLWA_NW_LYT_DRAWER_H

#include "acnlwa/nw/font/RectDrawer.h"

namespace nw {
namespace lyt {

class Drawer : public ::nw::font::RectDrawer {
public:
    virtual ~Drawer();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace lyt
}  // namespace nw

#endif  // ACNLWA_NW_LYT_DRAWER_H
