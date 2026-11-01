#ifndef ACNLWA_NN_NEX_CREDENTIALS_H
#define ACNLWA_NN_NEX_CREDENTIALS_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class Credentials : public ::nn::nex::RefCountedObject {
public:
    virtual ~Credentials();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CREDENTIALS_H
