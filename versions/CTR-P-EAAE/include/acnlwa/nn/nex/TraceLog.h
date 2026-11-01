#ifndef ACNLWA_NN_NEX_TRACELOG_H
#define ACNLWA_NN_NEX_TRACELOG_H

#include "acnlwa/nn/nex/Log.h"

namespace nn {
namespace nex {

class TraceLog : public ::nn::nex::Log {
public:
    virtual ~TraceLog();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_TRACELOG_H
