#ifndef ACNLWA_MENUMELODY_MELODYHOSTIO_H
#define ACNLWA_MENUMELODY_MELODYHOSTIO_H

#include "acnlwa/sead/hostio/Node.h"

namespace menumelody {

class MelodyHostIO : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

}  // namespace menumelody

#endif  // ACNLWA_MENUMELODY_MELODYHOSTIO_H
