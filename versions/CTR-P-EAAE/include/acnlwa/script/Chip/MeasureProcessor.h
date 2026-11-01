#ifndef ACNLWA_SCRIPT_CHIP_MEASUREPROCESSOR_H
#define ACNLWA_SCRIPT_CHIP_MEASUREPROCESSOR_H

#include "acnlwa/nw/font/TagProcessorBase.h"

namespace script {
namespace Chip {

class MeasureProcessor : public ::nw::font::TagProcessorBase<wchar_t> {
public:
    virtual ~MeasureProcessor();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace Chip
}  // namespace script

#endif  // ACNLWA_SCRIPT_CHIP_MEASUREPROCESSOR_H
