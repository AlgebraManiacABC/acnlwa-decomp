#ifndef ACNLWA_BIQUADNWADAPTOR_H
#define ACNLWA_BIQUADNWADAPTOR_H

#include "acnlwa/nw/snd/BiquadFilterCallback.h"

class BiquadNwAdaptor : public ::nw::snd::BiquadFilterCallback {
public:
    virtual ~BiquadNwAdaptor();
    virtual void VF02();
};

#endif  // ACNLWA_BIQUADNWADAPTOR_H
