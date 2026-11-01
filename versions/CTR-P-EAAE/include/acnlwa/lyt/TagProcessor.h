#ifndef ACNLWA_LYT_TAGPROCESSOR_H
#define ACNLWA_LYT_TAGPROCESSOR_H

#include "acnlwa/nw/font/TagProcessorBase.h"

namespace lyt {

class TagProcessor : public ::nw::font::TagProcessorBase<wchar_t> {
public:
    virtual ~TagProcessor();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace lyt

#endif  // ACNLWA_LYT_TAGPROCESSOR_H
