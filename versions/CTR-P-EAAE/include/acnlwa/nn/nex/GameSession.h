#ifndef ACNLWA_NN_NEX_GAMESESSION_H
#define ACNLWA_NN_NEX_GAMESESSION_H

#include "acnlwa/nn/nex/_DDL_GameSession.h"

namespace nn {
namespace nex {

class GameSession : public ::nn::nex::_DDL_GameSession {
public:
    virtual ~GameSession();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_GAMESESSION_H
