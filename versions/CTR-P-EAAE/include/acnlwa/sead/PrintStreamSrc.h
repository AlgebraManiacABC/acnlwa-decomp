#ifndef ACNLWA_SEAD_PRINTSTREAMSRC_H
#define ACNLWA_SEAD_PRINTSTREAMSRC_H

#include "acnlwa/sead/StreamSrc.h"

namespace sead {

class PrintStreamSrc : public ::sead::StreamSrc {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_PRINTSTREAMSRC_H
