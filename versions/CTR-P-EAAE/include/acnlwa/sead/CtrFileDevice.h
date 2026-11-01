#ifndef ACNLWA_SEAD_CTRFILEDEVICE_H
#define ACNLWA_SEAD_CTRFILEDEVICE_H

#include "acnlwa/sead/CtrFileStreamFileDevice.h"

namespace sead {

class CtrFileDevice : public ::sead::CtrFileStreamFileDevice {
public:
    virtual ~CtrFileDevice();
    virtual void VF02();
    virtual void VF03();
    virtual void VF29();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CTRFILEDEVICE_H
