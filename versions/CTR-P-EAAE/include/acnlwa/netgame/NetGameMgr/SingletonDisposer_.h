#ifndef ACNLWA_NETGAME_NETGAMEMGR_SINGLETONDISPOSER__H
#define ACNLWA_NETGAME_NETGAMEMGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace netgame {
namespace NetGameMgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace NetGameMgr
}  // namespace netgame

#endif  // ACNLWA_NETGAME_NETGAMEMGR_SINGLETONDISPOSER__H
