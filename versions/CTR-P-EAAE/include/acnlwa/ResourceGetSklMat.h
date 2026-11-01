#ifndef ACNLWA_RESOURCEGETSKLMAT_H
#define ACNLWA_RESOURCEGETSKLMAT_H

#include "acnlwa/ResourceGetSkeletal.h"

class ResourceGetSklMat : public ::ResourceGetSkeletal {
public:
    virtual ~ResourceGetSklMat();
    virtual void ResourceGetSkeletal_VF02();
    virtual void ResourceGetSkeletal_VF03();
};

#endif  // ACNLWA_RESOURCEGETSKLMAT_H
