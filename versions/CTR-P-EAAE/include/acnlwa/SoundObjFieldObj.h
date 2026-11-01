#ifndef ACNLWA_SOUNDOBJFIELDOBJ_H
#define ACNLWA_SOUNDOBJFIELDOBJ_H

#include "acnlwa/SoundObj.h"

class SoundObjFieldObj : public ::SoundObj<1> {
public:
    virtual ~SoundObjFieldObj();
    virtual void VF02();
    virtual void VF04();
    virtual void VF07();
    virtual void VF08();
};

#endif  // ACNLWA_SOUNDOBJFIELDOBJ_H
