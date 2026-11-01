#ifndef ACNLWA_CAUTION_H
#define ACNLWA_CAUTION_H

#include "acnlwa/state/Mode.h"
#include "acnlwa/sead/IDisposer.h"

class Caution : public ::state::Mode< ::Caution> {
public:
    class SingletonDisposer_ : public ::sead::IDisposer {
    public:
        virtual ~SingletonDisposer_();
    };

    virtual ~Caution();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_CAUTION_H
