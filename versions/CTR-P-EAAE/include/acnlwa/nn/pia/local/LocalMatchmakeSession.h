#ifndef ACNLWA_NN_PIA_LOCAL_LOCALMATCHMAKESESSION_H
#define ACNLWA_NN_PIA_LOCAL_LOCALMATCHMAKESESSION_H

#include "acnlwa/nn/pia/session/CommonMatchmakeSession.h"

namespace nn {
namespace pia {
namespace local {

class LocalMatchmakeSession : public ::nn::pia::session::CommonMatchmakeSession {
public:
    virtual ~LocalMatchmakeSession();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF08();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
    virtual void VF23();
    virtual void VF24();
    virtual void VF25();
    virtual void VF26();
    virtual void VF29();
    virtual unsigned int VF30(unsigned int);
    virtual void VF31();
    virtual void VF34();
    virtual void VF36();
    virtual void VF41();
    virtual void VF42();
    virtual void VF43() = 0;
    virtual void VF44() = 0;
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALMATCHMAKESESSION_H
