#ifndef ACNLWA_NN_OS_HANDLEOBJECT_H
#define ACNLWA_NN_OS_HANDLEOBJECT_H

#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace nn {
namespace os {

class HandleObject : private ::nn::util::ADLFireWall::NonCopyable< ::nn::os::HandleObject> {
public:
};

}  // namespace os
}  // namespace nn

#endif  // ACNLWA_NN_OS_HANDLEOBJECT_H
