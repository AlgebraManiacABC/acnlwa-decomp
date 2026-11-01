#ifndef ACNLWA_NN_NGC_CTR_PROFANITYFILTER_H
#define ACNLWA_NN_NGC_CTR_PROFANITYFILTER_H

#include "acnlwa/nn/ngc/CTR/ProfanityFilterBase.h"

namespace nn {
namespace ngc {
namespace CTR {

class ProfanityFilter : public ::nn::ngc::CTR::ProfanityFilterBase {
public:
    virtual ~ProfanityFilter();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace CTR
}  // namespace ngc
}  // namespace nn

#endif  // ACNLWA_NN_NGC_CTR_PROFANITYFILTER_H
