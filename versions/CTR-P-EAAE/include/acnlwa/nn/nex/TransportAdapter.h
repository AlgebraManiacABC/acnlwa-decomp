#ifndef ACNLWA_NN_NEX_TRANSPORTADAPTER_H
#define ACNLWA_NN_NEX_TRANSPORTADAPTER_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class TransportAdapter : public ::nn::nex::RootObject {
public:
    virtual ~TransportAdapter();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual unsigned int VF11(int);
    virtual void VF12();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_TRANSPORTADAPTER_H
