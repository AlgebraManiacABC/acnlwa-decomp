#ifndef ACNLWA_NN_FS_CTR_MPCORE_DETAIL_CONTENTROMFSARCHIVE_H
#define ACNLWA_NN_FS_CTR_MPCORE_DETAIL_CONTENTROMFSARCHIVE_H

#include "acnlwa/nn/fs/CTR/MPCore/detail/RomFsArchive.h"

namespace nn {
namespace fs {
namespace CTR {
namespace MPCore {
namespace detail {

class ContentRomFsArchive : public ::nn::fs::CTR::MPCore::detail::RomFsArchive {
public:
    virtual void VF12();
    virtual ~ContentRomFsArchive();
    virtual void VF15();
};

}  // namespace detail
}  // namespace MPCore
}  // namespace CTR
}  // namespace fs
}  // namespace nn

#endif  // ACNLWA_NN_FS_CTR_MPCORE_DETAIL_CONTENTROMFSARCHIVE_H
