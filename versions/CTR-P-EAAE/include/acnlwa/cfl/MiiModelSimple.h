#ifndef ACNLWA_CFL_MIIMODELSIMPLE_H
#define ACNLWA_CFL_MIIMODELSIMPLE_H

#include "acnlwa/cfl/MiiModelBase.h"

namespace cfl {

class MiiModelSimple : public ::cfl::MiiModelBase {
public:
    virtual ~MiiModelSimple();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF06();
    virtual void VF07();
    virtual unsigned int VF08(unsigned int *);
};

}  // namespace cfl

#endif  // ACNLWA_CFL_MIIMODELSIMPLE_H
