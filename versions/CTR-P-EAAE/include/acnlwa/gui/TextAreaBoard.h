#ifndef ACNLWA_GUI_TEXTAREABOARD_H
#define ACNLWA_GUI_TEXTAREABOARD_H

#include "acnlwa/gui/TextAreaEx.h"

namespace gui {

class TextAreaBoard : public ::gui::TextAreaEx {
public:
    virtual ~TextAreaBoard();
    virtual void VF04();
    virtual void VF06();
};

}  // namespace gui

#endif  // ACNLWA_GUI_TEXTAREABOARD_H
