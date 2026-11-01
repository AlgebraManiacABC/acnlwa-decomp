#ifndef ACNLWA_NW_LYT_PICTURE_H
#define ACNLWA_NW_LYT_PICTURE_H

#include "acnlwa/nw/lyt/Pane.h"

namespace nw {
namespace lyt {

class Picture : public ::nw::lyt::Pane {
public:
    virtual ~Picture();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF25();
    virtual void VF26();
    virtual void VF28();
    virtual void VF29();
};

}  // namespace lyt
}  // namespace nw

#endif  // ACNLWA_NW_LYT_PICTURE_H
