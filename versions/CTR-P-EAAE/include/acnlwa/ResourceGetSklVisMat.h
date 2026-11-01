#ifndef ACNLWA_RESOURCEGETSKLVISMAT_H
#define ACNLWA_RESOURCEGETSKLVISMAT_H

#include "acnlwa/ResourceGetSklVis.h"

class ResourceGetSklVisMat : public ::ResourceGetSklVis {
public:
    virtual ~ResourceGetSklVisMat();
    virtual void ResourceGetSkeletal_VF02();
    virtual void ResourceGetSkeletal_VF03();
};

#endif  // ACNLWA_RESOURCEGETSKLVISMAT_H
