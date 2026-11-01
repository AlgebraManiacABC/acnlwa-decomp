#ifndef ACNLWA_NW_SND_FXDELAY_H
#define ACNLWA_NW_SND_FXDELAY_H

#include "acnlwa/nw/snd/FxBase.h"

namespace nw {
namespace snd {

class FxDelay : public ::nw::snd::FxBase {
public:
    virtual ~FxDelay();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_FXDELAY_H
