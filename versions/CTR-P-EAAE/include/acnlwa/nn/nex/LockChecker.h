#ifndef ACNLWA_NN_NEX_LOCKCHECKER_H
#define ACNLWA_NN_NEX_LOCKCHECKER_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class LockChecker : public ::nn::nex::RootObject {
public:
    virtual ~LockChecker();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_LOCKCHECKER_H
