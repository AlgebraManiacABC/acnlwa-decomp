#ifndef ACNLWA_LYT_TEXTAREATAGPROCESSOR_H
#define ACNLWA_LYT_TEXTAREATAGPROCESSOR_H

#include "acnlwa/nw/font/TagProcessorBase.h"

namespace lyt {

class TextAreaTagProcessor : public ::nw::font::TagProcessorBase<wchar_t> {
public:
    virtual ~TextAreaTagProcessor();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace lyt

#endif  // ACNLWA_LYT_TEXTAREATAGPROCESSOR_H
