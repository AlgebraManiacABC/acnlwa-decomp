#ifndef ACNLWA_LYT_TEXTAREAONELINECOMTITLE_H
#define ACNLWA_LYT_TEXTAREAONELINECOMTITLE_H

#include "acnlwa/lyt/TextAreaOneLine.h"

namespace lyt {

class TextAreaOneLineComTitle : public ::lyt::TextAreaOneLine {
public:
    virtual ~TextAreaOneLineComTitle();
    virtual void VF04();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace lyt

#endif  // ACNLWA_LYT_TEXTAREAONELINECOMTITLE_H
