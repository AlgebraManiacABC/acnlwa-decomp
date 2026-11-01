#ifndef ACNLWA_SSYS_MA_LYT_LAYOUTLIST_H
#define ACNLWA_SSYS_MA_LYT_LAYOUTLIST_H

#include "acnlwa/ssys/st/List.h"

namespace ssys {
namespace ma {
namespace lyt {

class LayoutList : public ::ssys::st::List {
public:
    virtual ~LayoutList();
    virtual void VF02();
};

}  // namespace lyt
}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_LYT_LAYOUTLIST_H
