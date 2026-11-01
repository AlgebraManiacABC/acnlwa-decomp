#ifndef ACNLWA_NN_PIA_LOCAL_UDSMATCHMAKESESSION_H
#define ACNLWA_NN_PIA_LOCAL_UDSMATCHMAKESESSION_H

#include "acnlwa/nn/pia/local/LocalMatchmakeSession.h"

namespace nn {
namespace pia {
namespace local {

class UdsMatchmakeSession : public ::nn::pia::local::LocalMatchmakeSession {
public:
    virtual ~UdsMatchmakeSession();
    virtual void VF06();
    virtual void VF07();
    virtual void VF09();
    virtual void VF42();
    virtual void VF43();
    virtual void VF44();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_UDSMATCHMAKESESSION_H
