#ifndef ACNLWA_ITEM_RESLOADER_H
#define ACNLWA_ITEM_RESLOADER_H

#include "acnlwa/g3d/ResourceLoader.h"

namespace item {

class ResLoader : public ::g3d::ResourceLoader {
public:
    virtual ~ResLoader();
};

}  // namespace item

#endif  // ACNLWA_ITEM_RESLOADER_H
