#ifndef ACNLWA_CFL_MIIMODELBASE_H
#define ACNLWA_CFL_MIIMODELBASE_H

#include "acnlwa/ssys/st/ListNode.h"

namespace cfl {

class MiiModelBase {
public:
    class ListNodeMiiModelBase : public ::ssys::st::ListNode {
    public:
        virtual ~ListNodeMiiModelBase();
    };

    virtual ~MiiModelBase();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05();
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual unsigned int VF08(unsigned int *) = 0;
};

}  // namespace cfl

#endif  // ACNLWA_CFL_MIIMODELBASE_H
