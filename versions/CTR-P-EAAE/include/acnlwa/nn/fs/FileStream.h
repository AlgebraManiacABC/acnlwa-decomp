#ifndef ACNLWA_NN_FS_FILESTREAM_H
#define ACNLWA_NN_FS_FILESTREAM_H

#include "acnlwa/nn/fs/IStream.h"
#include "acnlwa/nn/fs/detail/FileBase.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace nn {
namespace fs {

class FileStream : public ::nn::fs::IStream, public ::nn::fs::detail::FileBase, private ::nn::util::ADLFireWall::NonCopyable< ::nn::fs::FileStream> {
public:
    virtual ~FileStream();
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
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
};

}  // namespace fs
}  // namespace nn

#endif  // ACNLWA_NN_FS_FILESTREAM_H
