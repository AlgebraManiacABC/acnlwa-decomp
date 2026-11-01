#ifndef ACNLWA_FONT_BASE_H
#define ACNLWA_FONT_BASE_H

#include "acnlwa/Base.h"

namespace font {

class Base : public ::Base {
public:
    virtual ~Base();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

}  // namespace font

#endif  // ACNLWA_FONT_BASE_H
