#ifndef ACNLWA_NN_NEX_SERVICECLIENT_H
#define ACNLWA_NN_NEX_SERVICECLIENT_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class ServiceClient : public ::nn::nex::RootObject {
public:
    virtual ~ServiceClient();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08() = 0;
    virtual void VF09();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SERVICECLIENT_H
