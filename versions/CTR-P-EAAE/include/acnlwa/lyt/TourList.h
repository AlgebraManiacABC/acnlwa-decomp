#ifndef ACNLWA_LYT_TOURLIST_H
#define ACNLWA_LYT_TOURLIST_H

#include "acnlwa/InstSelect.h"

namespace lyt {

class TourList : public ::InstSelect<8> {
public:
    virtual ~TourList();
    virtual void VF08();
    virtual void VF12();
    virtual void VF13();
    virtual void VF25();
};

}  // namespace lyt

#endif  // ACNLWA_LYT_TOURLIST_H
