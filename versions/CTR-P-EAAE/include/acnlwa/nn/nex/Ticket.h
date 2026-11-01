#ifndef ACNLWA_NN_NEX_TICKET_H
#define ACNLWA_NN_NEX_TICKET_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class Ticket : public ::nn::nex::RefCountedObject {
public:
    virtual ~Ticket();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_TICKET_H
