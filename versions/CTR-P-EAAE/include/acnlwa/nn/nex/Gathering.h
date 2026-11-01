#ifndef ACNLWA_NN_NEX_GATHERING_H
#define ACNLWA_NN_NEX_GATHERING_H

#include "acnlwa/nn/nex/_DDL_Gathering.h"

namespace nn {
namespace nex {

class Gathering : public ::nn::nex::_DDL_Gathering {
public:
    virtual ~Gathering();
    virtual void VF08();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_GATHERING_H
