#ifndef ACNLWA_SEAD_STRINGPRINTOUTPUT_H
#define ACNLWA_SEAD_STRINGPRINTOUTPUT_H

#include "acnlwa/sead/PrintOutput.h"

namespace sead {

class StringPrintOutput : public ::sead::PrintOutput {
public:
    virtual ~StringPrintOutput();
    virtual void VF02();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_STRINGPRINTOUTPUT_H
