#ifndef ACNLWA_RESOURCEGETMATERIAL_H
#define ACNLWA_RESOURCEGETMATERIAL_H

#include "acnlwa/ObjectResource.h"

class ResourceGetMaterial : virtual public ::ObjectResource {
public:
    virtual ~ResourceGetMaterial();
    virtual void ResourceGetMaterial_VF02();
    virtual void ResourceGetMaterial_VF03();
    virtual void ResourceGetMaterial_VF04();
    virtual void ResourceGetMaterial_VF05();
    virtual void ResourceGetMaterial_VF06();
};

#endif  // ACNLWA_RESOURCEGETMATERIAL_H
