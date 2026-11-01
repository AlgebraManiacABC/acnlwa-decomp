#ifndef ACNLWA_NN_NEX_EVENTLOG_H
#define ACNLWA_NN_NEX_EVENTLOG_H

#include "acnlwa/nn/nex/Log.h"

namespace nn {
namespace nex {

class EventLog : public ::nn::nex::Log {
public:
    virtual ~EventLog();
    virtual void VF04();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_EVENTLOG_H
