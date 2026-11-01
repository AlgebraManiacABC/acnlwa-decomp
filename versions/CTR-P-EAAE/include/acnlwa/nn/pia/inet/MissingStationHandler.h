#ifndef ACNLWA_NN_PIA_INET_MISSINGSTATIONHANDLER_H
#define ACNLWA_NN_PIA_INET_MISSINGSTATIONHANDLER_H

#include "acnlwa/nn/pia/transport/MissingStationHandler.h"

namespace nn {
namespace pia {
namespace inet {

class MissingStationHandler : public ::nn::pia::transport::MissingStationHandler {
public:
    virtual ~MissingStationHandler();
    virtual void VF02();
};

}  // namespace inet
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_INET_MISSINGSTATIONHANDLER_H
