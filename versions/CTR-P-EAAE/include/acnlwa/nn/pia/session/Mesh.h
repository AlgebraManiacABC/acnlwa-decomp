#ifndef ACNLWA_NN_PIA_SESSION_MESH_H
#define ACNLWA_NN_PIA_SESSION_MESH_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace session {

class Mesh : public ::nn::pia::common::RootObject {
public:
    virtual void VF00();
    virtual ~Mesh();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_MESH_H
