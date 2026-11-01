#ifndef ACNLWA_NETGAME_AVATARMGR_H
#define ACNLWA_NETGAME_AVATARMGR_H

#include "acnlwa/net/SystemCallback.h"

namespace netgame {

class AvatarMgr : public ::net::SystemCallback {
public:
    virtual ~AvatarMgr();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace netgame

#endif  // ACNLWA_NETGAME_AVATARMGR_H
