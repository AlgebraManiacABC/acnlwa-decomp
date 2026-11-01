#ifndef ACNLWA_LETTERDRAGSTOCKWINDOW_H
#define ACNLWA_LETTERDRAGSTOCKWINDOW_H

#include "acnlwa/LetterDragWindowBase.h"
#include "acnlwa/state/Mode.h"

class LetterDragStockWindow : public ::LetterDragWindowBase, public ::state::Mode< ::LetterDragStockWindow> {
public:
    virtual void VF01();
    virtual void LetterDragWindowBase_VF02();
    virtual void VF03();
    virtual ~LetterDragStockWindow();
};

#endif  // ACNLWA_LETTERDRAGSTOCKWINDOW_H
