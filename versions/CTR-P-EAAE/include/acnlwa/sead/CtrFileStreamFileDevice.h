#ifndef ACNLWA_SEAD_CTRFILESTREAMFILEDEVICE_H
#define ACNLWA_SEAD_CTRFILESTREAMFILEDEVICE_H

#include "acnlwa/sead/FileDevice.h"

namespace sead {

class CtrFileStreamFileDevice : public ::sead::FileDevice {
public:
    virtual ~CtrFileStreamFileDevice();
    virtual void VF02();
    virtual void VF03();
    virtual void VF09();
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
    virtual void VF28();
    virtual void VF29() = 0;
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CTRFILESTREAMFILEDEVICE_H
