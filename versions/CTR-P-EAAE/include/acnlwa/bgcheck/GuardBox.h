#ifndef ACNLWA_BGCHECK_GUARDBOX_H
#define ACNLWA_BGCHECK_GUARDBOX_H

#include "acnlwa/bgcheck/MoveBg.h"

namespace bgcheck {

class GuardBox : public ::bgcheck::MoveBg {
public:
    virtual ~GuardBox();
    virtual void MoveBg_VF03();
};

}  // namespace bgcheck

#endif  // ACNLWA_BGCHECK_GUARDBOX_H
