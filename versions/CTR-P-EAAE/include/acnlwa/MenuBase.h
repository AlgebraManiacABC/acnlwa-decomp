#ifndef ACNLWA_MENUBASE_H
#define ACNLWA_MENUBASE_H

#include "acnlwa/Base.h"
#include "acnlwa/ssys/st/ListNode.h"

class MenuBase : public ::Base {
public:
    class List : public ::ssys::st::ListNode {
    public:
        virtual ~List();
    };

    virtual ~MenuBase();
    virtual int Process_VF02();
    virtual unsigned int Process_VF03();
    virtual void Process_VF04();
    virtual int Process_VF05();
    virtual unsigned int Process_VF06();
    virtual void Process_VF07();
    virtual bool Process_VF08();
    virtual unsigned int Process_VF09();
    virtual void Process_VF10();
    virtual unsigned int Process_VF12();
    virtual void MenuBase_VF16();
    virtual void MenuBase_VF17();
    virtual void MenuBase_VF18();
    virtual void MenuBase_VF19();
    virtual void MenuBase_VF20();
    virtual void MenuBase_VF21();
    virtual void MenuBase_VF22();
    virtual void MenuBase_VF23();
    virtual void MenuBase_VF24();
};

#endif  // ACNLWA_MENUBASE_H
