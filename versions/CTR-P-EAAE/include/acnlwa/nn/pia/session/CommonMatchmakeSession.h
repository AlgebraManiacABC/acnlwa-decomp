#ifndef ACNLWA_NN_PIA_SESSION_COMMONMATCHMAKESESSION_H
#define ACNLWA_NN_PIA_SESSION_COMMONMATCHMAKESESSION_H

#include "acnlwa/nn/pia/session/IMatchmakeSession.h"

namespace nn {
namespace pia {
namespace session {

class CommonMatchmakeSession : public ::nn::pia::session::IMatchmakeSession {
public:
    virtual ~CommonMatchmakeSession();
    virtual void VF02();
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10() = 0;
    virtual void VF11() = 0;
    virtual void VF12() = 0;
    virtual void VF13() = 0;
    virtual void VF14() = 0;
    virtual void VF15() = 0;
    virtual void VF16() = 0;
    virtual void VF17() = 0;
    virtual void VF18() = 0;
    virtual void VF19() = 0;
    virtual void VF20() = 0;
    virtual void VF21() = 0;
    virtual void VF22() = 0;
    virtual void VF23() = 0;
    virtual void VF24() = 0;
    virtual void VF25() = 0;
    virtual void VF26();
    virtual void VF27();
    virtual void VF28();
    virtual void VF29() = 0;
    virtual unsigned int VF30(unsigned int) = 0;
    virtual void VF31() = 0;
    virtual void VF32();
    virtual void VF33();
    virtual void VF34();
    virtual void VF35();
    virtual void VF36();
    virtual void VF37();
    virtual void VF38();
    virtual void VF39();
    virtual void VF40();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_COMMONMATCHMAKESESSION_H
