#ifndef ACNLWA_NN_NEX_REFCOUNTEDOBJECT_H
#define ACNLWA_NN_NEX_REFCOUNTEDOBJECT_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class RefCountedObject : public ::nn::nex::RootObject {
public:
    virtual ~RefCountedObject();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_REFCOUNTEDOBJECT_H
