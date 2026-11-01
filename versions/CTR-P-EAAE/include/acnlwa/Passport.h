#ifndef ACNLWA_PASSPORT_H
#define ACNLWA_PASSPORT_H

#include "acnlwa/state/Mode.h"
#include "acnlwa/SoPaCaWindowBase.h"

class Passport : public ::state::Mode< ::Passport>, public ::SoPaCaWindowBase {
public:
    virtual ~Passport();
    virtual void Mode_VF02();
    virtual void Passport_VF03();
    virtual void Passport_VF04();
    virtual void Passport_VF05();
    virtual void Passport_VF06();
    virtual void Passport_VF07();
    virtual void Passport_VF08();
    virtual void Passport_VF09();
    virtual void VF10();
};

#endif  // ACNLWA_PASSPORT_H
