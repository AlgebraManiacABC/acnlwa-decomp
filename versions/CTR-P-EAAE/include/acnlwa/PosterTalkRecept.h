#ifndef ACNLWA_POSTERTALKRECEPT_H
#define ACNLWA_POSTERTALKRECEPT_H

#include "acnlwa/ObjTalkRecept.h"

class PosterTalkRecept : public ::ObjTalkRecept {
public:
    virtual ~PosterTalkRecept();
    virtual void ObjTalkRecept_VF65();
    virtual void VF67();
    virtual void VF68();
    virtual void VF71();
};

#endif  // ACNLWA_POSTERTALKRECEPT_H
