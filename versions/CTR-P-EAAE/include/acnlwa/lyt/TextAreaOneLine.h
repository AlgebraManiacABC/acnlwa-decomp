#ifndef ACNLWA_LYT_TEXTAREAONELINE_H
#define ACNLWA_LYT_TEXTAREAONELINE_H

#include "acnlwa/lyt/TextArea.h"

namespace lyt {

class TextAreaOneLine : public ::lyt::TextArea {
public:
    virtual ~TextAreaOneLine();
    virtual void VF02();
    virtual void VF04();
    virtual void VF05();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
};

}  // namespace lyt

#endif  // ACNLWA_LYT_TEXTAREAONELINE_H
