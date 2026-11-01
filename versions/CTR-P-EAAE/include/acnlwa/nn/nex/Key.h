#ifndef ACNLWA_NN_NEX_KEY_H
#define ACNLWA_NN_NEX_KEY_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class Key : public ::nn::nex::RefCountedObject {
public:
    virtual ~Key();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_KEY_H
