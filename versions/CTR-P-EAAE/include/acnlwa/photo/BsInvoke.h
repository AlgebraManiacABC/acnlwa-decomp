#ifndef ACNLWA_PHOTO_BSINVOKE_H
#define ACNLWA_PHOTO_BSINVOKE_H

#include "acnlwa/Base.h"

namespace photo {

class BsInvoke : public ::Base {
public:
    virtual ~BsInvoke();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

}  // namespace photo

#endif  // ACNLWA_PHOTO_BSINVOKE_H
