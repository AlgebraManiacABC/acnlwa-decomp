#ifndef ACNLWA_NN_NEX_EVENTHANDLER_H
#define ACNLWA_NN_NEX_EVENTHANDLER_H

#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class EventHandler : public ::nn::nex::RootObject {
public:
    virtual ~EventHandler();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_EVENTHANDLER_H
