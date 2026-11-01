#ifndef ACNLWA_NETGAME_MATCHINGLIST_SINGLETONDISPOSER__H
#define ACNLWA_NETGAME_MATCHINGLIST_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace netgame {
namespace MatchingList {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace MatchingList
}  // namespace netgame

#endif  // ACNLWA_NETGAME_MATCHINGLIST_SINGLETONDISPOSER__H
