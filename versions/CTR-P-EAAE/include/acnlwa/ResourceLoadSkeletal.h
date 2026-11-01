#ifndef ACNLWA_RESOURCELOADSKELETAL_H
#define ACNLWA_RESOURCELOADSKELETAL_H

#include "acnlwa/ResourceGetSkeletal.h"

class ResourceLoadSkeletal : public ::ResourceGetSkeletal {
public:
    virtual ~ResourceLoadSkeletal();
    virtual void ResourceGetSkeletal_VF03();
    virtual void ResourceGetSkeletal_VF04();
    virtual void ResourceLoadSkeletal_VF09();
    virtual void ResourceLoadSkeletal_VF10();
};

#endif  // ACNLWA_RESOURCELOADSKELETAL_H
