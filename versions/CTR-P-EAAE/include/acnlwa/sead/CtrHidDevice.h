#ifndef ACNLWA_SEAD_CTRHIDDEVICE_H
#define ACNLWA_SEAD_CTRHIDDEVICE_H

#include "acnlwa/sead/ControlDevice.h"

namespace sead {

class CtrHidDevice : public ::sead::ControlDevice {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~CtrHidDevice();
    virtual void VF04();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CTRHIDDEVICE_H
