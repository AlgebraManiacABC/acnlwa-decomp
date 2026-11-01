#ifndef ACNLWA_RESOURCELOADASYNCSKELETAL_H
#define ACNLWA_RESOURCELOADASYNCSKELETAL_H

#include "acnlwa/ResourceLoadSkeletal.h"

class ResourceLoadAsyncSkeletal : public ::ResourceLoadSkeletal {
public:
    virtual ~ResourceLoadAsyncSkeletal();
    virtual void ResourceLoadSkeletal_VF09();
};

#endif  // ACNLWA_RESOURCELOADASYNCSKELETAL_H
