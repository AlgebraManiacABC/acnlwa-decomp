#ifndef ACNLWA_GAMECOIN_GAMECOINHIO_H
#define ACNLWA_GAMECOIN_GAMECOINHIO_H

#include "acnlwa/sead/hostio/Node.h"

namespace gamecoin {

class GameCoinHIO : public ::sead::hostio::Node {
public:
    virtual void VF00();
};

}  // namespace gamecoin

#endif  // ACNLWA_GAMECOIN_GAMECOINHIO_H
