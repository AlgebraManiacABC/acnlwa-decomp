#ifndef ACNLWA_NN_FS_CTR_MPCORE_DETAIL_ROMFSARCHIVE_H
#define ACNLWA_NN_FS_CTR_MPCORE_DETAIL_ROMFSARCHIVE_H

#include "acnlwa/nn/fs/CTR/MPCore/detail/IArchive.h"
#include "acnlwa/nn/fs/CTR/MPCore/detail/IDirectory.h"
#include "acnlwa/nn/fs/CTR/MPCore/detail/IFile.h"

namespace nn {
namespace fs {
namespace CTR {
namespace MPCore {
namespace detail {

class RomFsArchive : public ::nn::fs::CTR::MPCore::detail::IArchive {
public:
    class Directory : public ::nn::fs::CTR::MPCore::detail::IDirectory {
    public:
        virtual void VF00();
        virtual void VF01();
        virtual void VF02();
        virtual void VF03();
        virtual ~Directory();
    };

    class File : public ::nn::fs::CTR::MPCore::detail::IFile {
    public:
        virtual void VF00();
        virtual void VF01();
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
        virtual ~File();
    };

    virtual void VF00();
    virtual void VF01();
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
    virtual void VF12() = 0;
    virtual ~RomFsArchive();
    virtual void VF15() = 0;
    virtual void VF16();
    virtual void VF17();
};

}  // namespace detail
}  // namespace MPCore
}  // namespace CTR
}  // namespace fs
}  // namespace nn

#endif  // ACNLWA_NN_FS_CTR_MPCORE_DETAIL_ROMFSARCHIVE_H
