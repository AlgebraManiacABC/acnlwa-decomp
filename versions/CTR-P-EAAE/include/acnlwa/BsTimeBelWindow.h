#ifndef ACNLWA_BSTIMEBELWINDOW_H
#define ACNLWA_BSTIMEBELWINDOW_H

#include "acnlwa/Base.h"
#include "acnlwa/state/Mode.h"

class BsTimeBelWindow : public ::Base, public ::state::Mode< ::BsTimeBelWindow> {
public:
    class MoneyProc : public ::state::Mode<MoneyProc> {
    public:
        virtual ~MoneyProc();
        virtual void Mode_VF02();
    };

    virtual ~BsTimeBelWindow();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSTIMEBELWINDOW_H
