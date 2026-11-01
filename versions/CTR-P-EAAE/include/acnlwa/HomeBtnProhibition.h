#ifndef ACNLWA_HOMEBTNPROHIBITION_H
#define ACNLWA_HOMEBTNPROHIBITION_H

#include "acnlwa/state/Mode.h"
#include "acnlwa/sead/IDisposer.h"

class HomeBtnProhibition : public ::state::Mode< ::HomeBtnProhibition> {
public:
    class SingletonDisposer_ : public ::sead::IDisposer {
    public:
        virtual ~SingletonDisposer_();
    };

    virtual ~HomeBtnProhibition();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_HOMEBTNPROHIBITION_H
