#ifndef ACNLWA_FGOBJ_PROC_H
#define ACNLWA_FGOBJ_PROC_H

#include "acnlwa/Base.h"

namespace fgobj {

class Proc : public ::Base {
public:
    virtual ~Proc();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

}  // namespace fgobj

#endif  // ACNLWA_FGOBJ_PROC_H
