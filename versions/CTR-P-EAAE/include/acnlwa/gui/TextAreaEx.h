#ifndef ACNLWA_GUI_TEXTAREAEX_H
#define ACNLWA_GUI_TEXTAREAEX_H

#include "acnlwa/gui/TextArea.h"

namespace gui {

class TextAreaEx : public ::gui::TextArea {
public:
    virtual ~TextAreaEx();
    virtual void VF03();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace gui

#endif  // ACNLWA_GUI_TEXTAREAEX_H
