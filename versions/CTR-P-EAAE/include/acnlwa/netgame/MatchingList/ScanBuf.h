#ifndef ACNLWA_NETGAME_MATCHINGLIST_SCANBUF_H
#define ACNLWA_NETGAME_MATCHINGLIST_SCANBUF_H

#include "acnlwa/net/ScanBufBase.h"

namespace netgame {
namespace MatchingList {

class ScanBuf : public ::net::ScanBufBase {
public:
    virtual ~ScanBuf();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace MatchingList
}  // namespace netgame

#endif  // ACNLWA_NETGAME_MATCHINGLIST_SCANBUF_H
