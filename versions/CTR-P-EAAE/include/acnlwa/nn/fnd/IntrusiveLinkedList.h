#ifndef ACNLWA_NN_FND_INTRUSIVELINKEDLIST_H
#define ACNLWA_NN_FND_INTRUSIVELINKEDLIST_H

#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace nn {
namespace fnd {

template <typename T0, typename T1>
class IntrusiveLinkedList {
public:
    class Item : private ::nn::util::ADLFireWall::NonCopyable<Item> {
    public:
    };
};
}  // namespace fnd
}  // namespace nn

#endif  // ACNLWA_NN_FND_INTRUSIVELINKEDLIST_H
