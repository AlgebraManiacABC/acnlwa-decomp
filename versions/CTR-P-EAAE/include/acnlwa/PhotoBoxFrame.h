#ifndef ACNLWA_PHOTOBOXFRAME_H
#define ACNLWA_PHOTOBOXFRAME_H

#include "acnlwa/state/Mode.h"

class PhotoBoxFrame : public ::state::Mode< ::PhotoBoxFrame> {
public:
    virtual ~PhotoBoxFrame();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_PHOTOBOXFRAME_H
