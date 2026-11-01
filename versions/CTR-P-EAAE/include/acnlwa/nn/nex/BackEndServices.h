#ifndef ACNLWA_NN_NEX_BACKENDSERVICES_H
#define ACNLWA_NN_NEX_BACKENDSERVICES_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class BackEndServices : public ::nn::nex::RootObject {
public:
    virtual ~BackEndServices();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_BACKENDSERVICES_H
