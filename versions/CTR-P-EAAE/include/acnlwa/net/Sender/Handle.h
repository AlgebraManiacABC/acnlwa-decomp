#ifndef ACNLWA_NET_SENDER_HANDLE_H
#define ACNLWA_NET_SENDER_HANDLE_H

#include "acnlwa/ssys/st/ListNode.h"

namespace net {
namespace Sender {

class Handle : public ::ssys::st::ListNode {
public:
    virtual ~Handle();
};

}  // namespace Sender
}  // namespace net

#endif  // ACNLWA_NET_SENDER_HANDLE_H
