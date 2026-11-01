#ifndef ACNLWA_NN_FS_DETAIL_FILEBASEIMPL_H
#define ACNLWA_NN_FS_DETAIL_FILEBASEIMPL_H

#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace nn {
namespace fs {
namespace detail {

class FileBaseImpl : private ::nn::util::ADLFireWall::NonCopyable< ::nn::fs::detail::FileBaseImpl> {
public:
};

}  // namespace detail
}  // namespace fs
}  // namespace nn

#endif  // ACNLWA_NN_FS_DETAIL_FILEBASEIMPL_H
