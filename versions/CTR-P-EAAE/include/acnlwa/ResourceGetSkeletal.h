#ifndef ACNLWA_RESOURCEGETSKELETAL_H
#define ACNLWA_RESOURCEGETSKELETAL_H

#include "acnlwa/ObjectResource.h"

class ResourceGetSkeletal : virtual public ::ObjectResource {
public:
    virtual ~ResourceGetSkeletal();
    virtual void ResourceGetSkeletal_VF02();
    virtual void ResourceGetSkeletal_VF03();
    virtual void ResourceGetSkeletal_VF04();
    virtual void ResourceGetSkeletal_VF05();
    virtual void ResourceGetSkeletal_VF06();
    virtual void ResourceGetSkeletal_VF07();
    virtual void ResourceGetSkeletal_VF08();
};

#endif  // ACNLWA_RESOURCEGETSKELETAL_H
