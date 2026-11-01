#ifndef ACNLWA_PEAD_PRINTSTREAMSRC_H
#define ACNLWA_PEAD_PRINTSTREAMSRC_H

#include "acnlwa/pead/StreamSrc.h"

namespace pead {

class PrintStreamSrc : public ::pead::StreamSrc {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace pead

#endif  // ACNLWA_PEAD_PRINTSTREAMSRC_H
