#ifndef ACNLWA_SCRIPT_IMAILRECEPT_H
#define ACNLWA_SCRIPT_IMAILRECEPT_H

#include "acnlwa/script/IRecept.h"

namespace script {

class IMailRecept : public ::script::IRecept {
public:
    virtual ~IMailRecept();
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
    virtual void VF29();
    virtual void VF30();
    virtual void VF31();
    virtual void VF32();
    virtual void VF33();
    virtual void VF34();
    virtual void VF35() = 0;
    virtual void VF36() = 0;
    virtual void VF37() = 0;
    virtual void VF38() = 0;
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_IMAILRECEPT_H
