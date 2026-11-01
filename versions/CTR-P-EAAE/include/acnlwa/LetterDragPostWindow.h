#ifndef ACNLWA_LETTERDRAGPOSTWINDOW_H
#define ACNLWA_LETTERDRAGPOSTWINDOW_H

#include "acnlwa/LetterDragWindowBase.h"
#include "acnlwa/state/Mode.h"

class LetterDragPostWindow : public ::LetterDragWindowBase, public ::state::Mode< ::LetterDragPostWindow> {
public:
    virtual void LetterDragWindowBase_VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual ~LetterDragPostWindow();
};

#endif  // ACNLWA_LETTERDRAGPOSTWINDOW_H
