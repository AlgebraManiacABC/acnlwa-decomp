#ifndef ACNLWA_NN_NEX_NGSBRIDGEIMP_H
#define ACNLWA_NN_NEX_NGSBRIDGEIMP_H

#include "acnlwa/nn/nex/NgsBridgeInterface.h"

namespace nn {
namespace nex {

class NgsBridgeImp : public ::nn::nex::NgsBridgeInterface {
public:
    virtual ~NgsBridgeImp();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_NGSBRIDGEIMP_H
