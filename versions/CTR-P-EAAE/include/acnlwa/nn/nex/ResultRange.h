#ifndef ACNLWA_NN_NEX_RESULTRANGE_H
#define ACNLWA_NN_NEX_RESULTRANGE_H

#include "acnlwa/nn/nex/_DDL_ResultRange.h"

namespace nn {
namespace nex {

class ResultRange : public ::nn::nex::_DDL_ResultRange {
public:
    virtual ~ResultRange();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_RESULTRANGE_H
