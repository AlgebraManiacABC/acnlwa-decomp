#ifndef ACNLWA_NN_NEX_NATTRAVERSALSTREAM_H
#define ACNLWA_NN_NEX_NATTRAVERSALSTREAM_H

#include "acnlwa/nn/nex/HighLevelStream.h"

namespace nn {
namespace nex {

class NATTraversalStream : public ::nn::nex::HighLevelStream {
public:
    virtual ~NATTraversalStream();
    virtual void VF03();
    virtual void VF05();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_NATTRAVERSALSTREAM_H
