#ifndef ACNLWA_PEAD_TEXTSTREAMFORMAT_H
#define ACNLWA_PEAD_TEXTSTREAMFORMAT_H

#include "acnlwa/pead/StreamFormat.h"

namespace pead {

class TextStreamFormat : public ::pead::StreamFormat {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
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
    virtual void VF27();
    virtual void VF28();
};

}  // namespace pead

#endif  // ACNLWA_PEAD_TEXTSTREAMFORMAT_H
