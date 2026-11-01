#ifndef ACNLWA_NN_NEX__DDL_MATCHMAKESESSION_H
#define ACNLWA_NN_NEX__DDL_MATCHMAKESESSION_H

#include "acnlwa/nn/nex/Gathering.h"

namespace nn {
namespace nex {

class _DDL_MatchmakeSession : public ::nn::nex::Gathering {
public:
    virtual ~_DDL_MatchmakeSession();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX__DDL_MATCHMAKESESSION_H
