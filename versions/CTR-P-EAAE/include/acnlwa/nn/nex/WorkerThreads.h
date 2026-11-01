#ifndef ACNLWA_NN_NEX_WORKERTHREADS_H
#define ACNLWA_NN_NEX_WORKERTHREADS_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class WorkerThreads : public ::nn::nex::RootObject {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual ~WorkerThreads();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_WORKERTHREADS_H
