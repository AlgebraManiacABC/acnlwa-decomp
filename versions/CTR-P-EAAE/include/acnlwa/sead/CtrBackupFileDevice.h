#ifndef ACNLWA_SEAD_CTRBACKUPFILEDEVICE_H
#define ACNLWA_SEAD_CTRBACKUPFILEDEVICE_H

#include "acnlwa/sead/CtrFileStreamFileDevice.h"

namespace sead {

class CtrBackupFileDevice : public ::sead::CtrFileStreamFileDevice {
public:
    virtual ~CtrBackupFileDevice();
    virtual void VF02();
    virtual void VF03();
    virtual void VF29();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CTRBACKUPFILEDEVICE_H
