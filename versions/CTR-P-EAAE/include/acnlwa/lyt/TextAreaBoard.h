#ifndef ACNLWA_LYT_TEXTAREABOARD_H
#define ACNLWA_LYT_TEXTAREABOARD_H

#include "acnlwa/lyt/TextAreaEx.h"

namespace lyt {

class TextAreaBoard : public ::lyt::TextAreaEx {
public:
    virtual ~TextAreaBoard();
    virtual void VF02();
    virtual void VF04();
    virtual void VF05();
    virtual void VF07();
    virtual void VF17();
    virtual void VF18();
    virtual void VF22();
};

}  // namespace lyt

#endif  // ACNLWA_LYT_TEXTAREABOARD_H
