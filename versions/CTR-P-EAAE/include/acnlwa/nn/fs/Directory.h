#ifndef ACNLWA_NN_FS_DIRECTORY_H
#define ACNLWA_NN_FS_DIRECTORY_H

#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"
#include "acnlwa/nn/fs/detail/DirectoryBase.h"

namespace nn {
namespace fs {

class Directory : private ::nn::util::ADLFireWall::NonCopyable< ::nn::fs::Directory>, private ::nn::fs::detail::DirectoryBase {
public:
    virtual ~Directory();
};

}  // namespace fs
}  // namespace nn

#endif  // ACNLWA_NN_FS_DIRECTORY_H
