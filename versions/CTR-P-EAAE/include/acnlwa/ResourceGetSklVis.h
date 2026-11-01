#ifndef ACNLWA_RESOURCEGETSKLVIS_H
#define ACNLWA_RESOURCEGETSKLVIS_H

#include "acnlwa/ResourceGetSkeletal.h"

class ResourceGetSklVis : public ::ResourceGetSkeletal {
public:
    virtual ~ResourceGetSklVis();
    virtual void ResourceGetSkeletal_VF02();
    virtual void ResourceGetSkeletal_VF03();
};

#endif  // ACNLWA_RESOURCEGETSKLVIS_H
