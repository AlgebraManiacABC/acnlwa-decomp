#ifndef ACNLWA_SCRIPT_BASE_H
#define ACNLWA_SCRIPT_BASE_H

#include "acnlwa/Base.h"

namespace script {

class Base : public ::Base {
public:
    virtual ~Base();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_BASE_H
