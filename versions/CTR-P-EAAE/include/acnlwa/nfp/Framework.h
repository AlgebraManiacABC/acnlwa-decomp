#ifndef ACNLWA_NFP_FRAMEWORK_H
#define ACNLWA_NFP_FRAMEWORK_H

#include "acnlwa/state/Mode.h"
#include "acnlwa/sead/Delegate.h"

namespace nfp {

class Framework : public ::state::Mode< ::nfp::Framework> {
public:
    class Delegate : public ::sead::Delegate< ::nfp::Framework> {
    public:
        virtual ~Delegate();
    };

    class Step {
    public:
        virtual ~Step();
    };

    virtual ~Framework();
    virtual void Mode_VF02();
};

}  // namespace nfp

#endif  // ACNLWA_NFP_FRAMEWORK_H
