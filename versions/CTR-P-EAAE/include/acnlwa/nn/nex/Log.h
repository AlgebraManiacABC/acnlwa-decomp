#ifndef ACNLWA_NN_NEX_LOG_H
#define ACNLWA_NN_NEX_LOG_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class Log : public ::nn::nex::RootObject {
public:
    virtual ~Log();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_LOG_H
