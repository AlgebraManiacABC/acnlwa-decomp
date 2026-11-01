#ifndef ACNLWA_ITEMSELECTNAMEWINDOW_H
#define ACNLWA_ITEMSELECTNAMEWINDOW_H

#include "acnlwa/state/Mode.h"

class ItemSelectNameWindow : public ::state::Mode< ::ItemSelectNameWindow> {
public:
    virtual ~ItemSelectNameWindow();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_ITEMSELECTNAMEWINDOW_H
