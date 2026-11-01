#ifndef ACNLWA_FTR_RESLOADER_H
#define ACNLWA_FTR_RESLOADER_H

#include "acnlwa/g3d/ResourceLoader.h"

namespace ftr {

class ResLoader : public ::g3d::ResourceLoader {
public:
    virtual ~ResLoader();
};

}  // namespace ftr

#endif  // ACNLWA_FTR_RESLOADER_H
