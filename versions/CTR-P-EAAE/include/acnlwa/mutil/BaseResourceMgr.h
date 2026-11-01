#ifndef ACNLWA_MUTIL_BASERESOURCEMGR_H
#define ACNLWA_MUTIL_BASERESOURCEMGR_H

#include "acnlwa/ssys/st/ListNode.h"

namespace mutil {

template <typename T0, unsigned int T1>
class BaseResourceMgr {
public:
    class ResourceNode : public ::ssys::st::ListNode {
    public:
        virtual ~ResourceNode();
    };
};

template <typename T0, unsigned int T1>
BaseResourceMgr<T0, T1>::ResourceNode::~ResourceNode() {}


}  // namespace mutil

#endif  // ACNLWA_MUTIL_BASERESOURCEMGR_H
