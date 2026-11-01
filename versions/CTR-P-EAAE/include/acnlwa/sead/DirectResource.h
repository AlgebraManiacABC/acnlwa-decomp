#ifndef ACNLWA_SEAD_DIRECTRESOURCE_H
#define ACNLWA_SEAD_DIRECTRESOURCE_H

#include "acnlwa/sead/Resource.h"

namespace sead {

class DirectResource : public ::sead::Resource {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~DirectResource();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_DIRECTRESOURCE_H
