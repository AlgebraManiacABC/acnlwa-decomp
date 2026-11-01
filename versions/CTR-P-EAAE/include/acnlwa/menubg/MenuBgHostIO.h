#ifndef ACNLWA_MENUBG_MENUBGHOSTIO_H
#define ACNLWA_MENUBG_MENUBGHOSTIO_H

#include "acnlwa/sead/hostio/Node.h"

namespace menubg {

class MenuBgHostIO : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

}  // namespace menubg

#endif  // ACNLWA_MENUBG_MENUBGHOSTIO_H
