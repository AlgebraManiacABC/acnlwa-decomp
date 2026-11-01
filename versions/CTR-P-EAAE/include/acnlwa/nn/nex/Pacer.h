#ifndef ACNLWA_NN_NEX_PACER_H
#define ACNLWA_NN_NEX_PACER_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class Pacer : public ::nn::nex::RootObject {
public:
    virtual ~Pacer();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PACER_H
