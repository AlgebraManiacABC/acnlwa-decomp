#ifndef ACNLWA_NN_NEX_ENDPOINTEVENTHANDLER_H
#define ACNLWA_NN_NEX_ENDPOINTEVENTHANDLER_H

#include "acnlwa/nn/nex/RefCountedObject.h"

namespace nn {
namespace nex {

class EndPointEventHandler : public ::nn::nex::RefCountedObject {
public:
    virtual ~EndPointEventHandler();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_ENDPOINTEVENTHANDLER_H
