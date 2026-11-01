#ifndef ACNLWA_NN_FS_FILEOUTPUTSTREAM_H
#define ACNLWA_NN_FS_FILEOUTPUTSTREAM_H

#include "acnlwa/nn/fs/IOutputStream.h"
#include "acnlwa/nn/fs/detail/FileBase.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace nn {
namespace fs {

class FileOutputStream : public ::nn::fs::IOutputStream, public ::nn::fs::detail::FileBase, private ::nn::util::ADLFireWall::NonCopyable< ::nn::fs::FileOutputStream> {
public:
    virtual ~FileOutputStream();
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
};

}  // namespace fs
}  // namespace nn

#endif  // ACNLWA_NN_FS_FILEOUTPUTSTREAM_H
