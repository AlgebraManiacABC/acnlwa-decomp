#ifndef ACNLWA_SEAD_RESOURCEFACTORY_H
#define ACNLWA_SEAD_RESOURCEFACTORY_H

#include "acnlwa/sead/TListNode.h"
#include "acnlwa/sead/IDisposer.h"

namespace sead {

class ResourceFactory : public sead::TListNode<sead::ResourceFactory*>, public ::sead::IDisposer {
public:
    virtual ~ResourceFactory();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
};

}  // namespace sead

#endif  // ACNLWA_SEAD_RESOURCEFACTORY_H
