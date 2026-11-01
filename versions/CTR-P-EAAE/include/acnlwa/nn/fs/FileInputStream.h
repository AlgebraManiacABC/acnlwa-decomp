#ifndef ACNLWA_NN_FS_FILEINPUTSTREAM_H
#define ACNLWA_NN_FS_FILEINPUTSTREAM_H

#include "acnlwa/nn/fs/IInputStream.h"
#include "acnlwa/nn/fs/detail/FileBase.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace nn {
namespace fs {

class FileInputStream : public ::nn::fs::IInputStream, public ::nn::fs::detail::FileBase, private ::nn::util::ADLFireWall::NonCopyable< ::nn::fs::FileInputStream> {
public:
    virtual ~FileInputStream();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
};

}  // namespace fs
}  // namespace nn

#endif  // ACNLWA_NN_FS_FILEINPUTSTREAM_H
