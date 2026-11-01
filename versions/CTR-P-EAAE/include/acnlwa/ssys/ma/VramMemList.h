#ifndef ACNLWA_SSYS_MA_VRAMMEMLIST_H
#define ACNLWA_SSYS_MA_VRAMMEMLIST_H

#include "acnlwa/ssys/st/ListPriority.h"

namespace ssys {
namespace ma {

class VramMemList : public ::ssys::st::ListPriority {
public:
    virtual ~VramMemList();
};

}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_VRAMMEMLIST_H
