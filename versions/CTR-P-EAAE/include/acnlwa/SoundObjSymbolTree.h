#ifndef ACNLWA_SOUNDOBJSYMBOLTREE_H
#define ACNLWA_SOUNDOBJSYMBOLTREE_H

#include "acnlwa/SoundObjHold.h"

class SoundObjSymbolTree : public ::SoundObjHold {
public:
    virtual ~SoundObjSymbolTree();
    virtual void VF02();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDOBJSYMBOLTREE_H
