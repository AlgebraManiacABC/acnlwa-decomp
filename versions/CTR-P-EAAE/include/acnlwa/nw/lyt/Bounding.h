#ifndef ACNLWA_NW_LYT_BOUNDING_H
#define ACNLWA_NW_LYT_BOUNDING_H

#include "acnlwa/nw/lyt/Pane.h"

namespace nw {
namespace lyt {

class Bounding : public ::nw::lyt::Pane {
public:
    virtual ~Bounding();
    virtual void VF02();
    virtual void VF25();
};

}  // namespace lyt
}  // namespace nw

#endif  // ACNLWA_NW_LYT_BOUNDING_H
