#ifndef ACNLWA_NN_NEX_UTILITYCLIENT_H
#define ACNLWA_NN_NEX_UTILITYCLIENT_H

#include "acnlwa/nn/nex/ServiceClient.h"

namespace nn {
namespace nex {

class UtilityClient : public ::nn::nex::ServiceClient {
public:
    virtual ~UtilityClient();
    virtual void VF03();
    virtual void VF04();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_UTILITYCLIENT_H
