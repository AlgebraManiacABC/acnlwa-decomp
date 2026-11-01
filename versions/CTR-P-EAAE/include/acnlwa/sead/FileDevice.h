#ifndef ACNLWA_SEAD_FILEDEVICE_H
#define ACNLWA_SEAD_FILEDEVICE_H

#include "acnlwa/sead/TListNode.h"
#include "acnlwa/sead/IDisposer.h"

namespace sead {

class FileDevice : public sead::TListNode<sead::FileDevice*>, public ::sead::IDisposer {
public:
    virtual ~FileDevice();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09() = 0;
    virtual void VF10();
    virtual void VF11();
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
    virtual void VF26() = 0;
    virtual void VF27();
    virtual void VF28();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_FILEDEVICE_H
