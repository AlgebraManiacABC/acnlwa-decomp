#ifndef ACNLWA_STRCBLD_CHECKER_H
#define ACNLWA_STRCBLD_CHECKER_H

#include "acnlwa/JmpBlock/Visitor.h"

namespace strcbld {

class Checker : public ::JmpBlock::Visitor {
public:
    virtual void VF00();
};

}  // namespace strcbld

#endif  // ACNLWA_STRCBLD_CHECKER_H
