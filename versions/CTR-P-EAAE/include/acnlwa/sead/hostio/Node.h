#ifndef ACNLWA_SEAD_HOSTIO_NODE_H
#define ACNLWA_SEAD_HOSTIO_NODE_H

#include "acnlwa/sead/hostio/Reflexible.h"

namespace sead {
namespace hostio {

class Node : public ::sead::hostio::Reflexible {
public:
    virtual ~Node();
};

}  // namespace hostio
}  // namespace sead

#endif  // ACNLWA_SEAD_HOSTIO_NODE_H
