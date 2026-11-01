#ifndef ACNLWA_NN_NEX_MATCHMAKINGSERVICEDDLDECLARATIONS_H
#define ACNLWA_NN_NEX_MATCHMAKINGSERVICEDDLDECLARATIONS_H

#include "acnlwa/nn/nex/DDLDeclarations.h"

namespace nn {
namespace nex {

class MatchMakingServiceDDLDeclarations : public ::nn::nex::DDLDeclarations {
public:
    virtual ~MatchMakingServiceDDLDeclarations();
    virtual void VF02();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MATCHMAKINGSERVICEDDLDECLARATIONS_H
