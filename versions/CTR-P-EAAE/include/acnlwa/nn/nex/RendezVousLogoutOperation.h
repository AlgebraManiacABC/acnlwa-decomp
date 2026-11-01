#ifndef ACNLWA_NN_NEX_RENDEZVOUSLOGOUTOPERATION_H
#define ACNLWA_NN_NEX_RENDEZVOUSLOGOUTOPERATION_H

#include "acnlwa/nn/nex/RendezVousOperation.h"

namespace nn {
namespace nex {

class RendezVousLogoutOperation : public ::nn::nex::RendezVousOperation {
public:
    virtual ~RendezVousLogoutOperation();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_RENDEZVOUSLOGOUTOPERATION_H
