#ifndef ACNLWA_NN_NEX_HIGHLEVELSTREAM_H
#define ACNLWA_NN_NEX_HIGHLEVELSTREAM_H

#include "acnlwa/nn/nex/Stream.h"

namespace nn {
namespace nex {

class HighLevelStream : public ::nn::nex::Stream {
public:
    virtual ~HighLevelStream();
    virtual void VF02();
    virtual void VF03();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_HIGHLEVELSTREAM_H
