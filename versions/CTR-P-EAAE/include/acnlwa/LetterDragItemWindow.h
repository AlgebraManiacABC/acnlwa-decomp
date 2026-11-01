#ifndef ACNLWA_LETTERDRAGITEMWINDOW_H
#define ACNLWA_LETTERDRAGITEMWINDOW_H

#include "acnlwa/LetterDragWindowBase.h"
#include "acnlwa/state/Mode.h"

class LetterDragItemWindow : public ::LetterDragWindowBase, public ::state::Mode< ::LetterDragItemWindow> {
public:
    virtual void VF01();
    virtual void LetterDragWindowBase_VF02();
    virtual void VF04();
    virtual ~LetterDragItemWindow();
};

#endif  // ACNLWA_LETTERDRAGITEMWINDOW_H
