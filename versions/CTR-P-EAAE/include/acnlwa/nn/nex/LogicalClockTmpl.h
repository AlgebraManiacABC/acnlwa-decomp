#ifndef ACNLWA_NN_NEX_LOGICALCLOCKTMPL_H
#define ACNLWA_NN_NEX_LOGICALCLOCKTMPL_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

template <typename T0, typename T1>
class LogicalClockTmpl : public ::nn::nex::RootObject {
public:
    virtual ~LogicalClockTmpl();
};

template <typename T0, typename T1>
LogicalClockTmpl<T0, T1>::~LogicalClockTmpl() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_LOGICALCLOCKTMPL_H
