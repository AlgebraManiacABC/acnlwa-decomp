#ifndef ACNLWA_MUTIL_LOADERWRAPPER_H
#define ACNLWA_MUTIL_LOADERWRAPPER_H

#include "acnlwa/ssys/ma/LoadSplit.h"

namespace mutil {

class LoaderWrapper : public ::ssys::ma::LoadSplit {
public:
    virtual ~LoaderWrapper();
};

}  // namespace mutil

#endif  // ACNLWA_MUTIL_LOADERWRAPPER_H
