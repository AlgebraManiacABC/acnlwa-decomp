#ifndef ACNLWA_RESOURCENONE_H
#define ACNLWA_RESOURCENONE_H

#include "acnlwa/ObjectResource.h"

class ResourceNone : virtual public ::ObjectResource {
public:
    virtual ~ResourceNone();
    virtual void ResourceNone_VF02();
    virtual void ResourceNone_VF03();
    virtual void ResourceNone_VF04();
    virtual void ResourceNone_VF05();
    virtual void ResourceNone_VF06();
};

#endif  // ACNLWA_RESOURCENONE_H
