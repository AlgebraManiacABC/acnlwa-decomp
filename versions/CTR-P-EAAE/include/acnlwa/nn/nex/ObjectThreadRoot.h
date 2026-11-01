#ifndef ACNLWA_NN_NEX_OBJECTTHREADROOT_H
#define ACNLWA_NN_NEX_OBJECTTHREADROOT_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class ObjectThreadRoot : public ::nn::nex::RootObject {
public:
    virtual ~ObjectThreadRoot();
    virtual void VF02() = 0;
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_OBJECTTHREADROOT_H
