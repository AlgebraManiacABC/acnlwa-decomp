#ifndef ACNLWA_GUI_TEXTAREAMAIL_H
#define ACNLWA_GUI_TEXTAREAMAIL_H

#include "acnlwa/gui/TextAreaEx.h"

namespace gui {

class TextAreaMail : public ::gui::TextAreaEx {
public:
    virtual ~TextAreaMail();
    virtual void VF04();
    virtual void VF06();
};

}  // namespace gui

#endif  // ACNLWA_GUI_TEXTAREAMAIL_H
