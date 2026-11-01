#ifndef ACNLWA_NN_NEX_HTTPCONNECTION_H
#define ACNLWA_NN_NEX_HTTPCONNECTION_H

#include "acnlwa/nn/nex/RootObject.h"
#include "acnlwa/nn/nex/NonCopyable.h"

namespace nn {
namespace nex {

class HttpConnection : public ::nn::nex::RootObject, public ::nn::nex::NonCopyable {
public:
    virtual ~HttpConnection();
    virtual void VF02() = 0;
    virtual void VF03() = 0;
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06();
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10() = 0;
    virtual void VF11() = 0;
    virtual void VF12() = 0;
    virtual void VF13() = 0;
    virtual void VF14() = 0;
    virtual void VF15() = 0;
    virtual void VF16() = 0;
    virtual void VF17() = 0;
    virtual void VF18() = 0;
    virtual void VF19() = 0;
    virtual void VF20();
    virtual void VF21() = 0;
    virtual void VF22() = 0;
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_HTTPCONNECTION_H
