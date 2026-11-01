#ifndef ACNLWA_DEMO_PROC_H
#define ACNLWA_DEMO_PROC_H

#include "acnlwa/Base.h"

namespace demo {

class Proc : public ::Base {
public:
    virtual ~Proc();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

}  // namespace demo

#endif  // ACNLWA_DEMO_PROC_H
