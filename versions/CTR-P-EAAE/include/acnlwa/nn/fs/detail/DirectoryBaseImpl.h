#ifndef ACNLWA_NN_FS_DETAIL_DIRECTORYBASEIMPL_H
#define ACNLWA_NN_FS_DETAIL_DIRECTORYBASEIMPL_H

#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace nn {
namespace fs {
namespace detail {

class DirectoryBaseImpl : private ::nn::util::ADLFireWall::NonCopyable< ::nn::fs::detail::DirectoryBaseImpl> {
public:
};

}  // namespace detail
}  // namespace fs
}  // namespace nn

#endif  // ACNLWA_NN_FS_DETAIL_DIRECTORYBASEIMPL_H
