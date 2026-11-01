#ifndef ACNLWA_NN_NEX_PSEUDOSINGLETON_H
#define ACNLWA_NN_NEX_PSEUDOSINGLETON_H

#include "acnlwa/nn/nex/InstanceControl.h"

namespace nn {
namespace nex {

class PseudoSingleton : public ::nn::nex::InstanceControl {
public:
    virtual ~PseudoSingleton();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PSEUDOSINGLETON_H
