#ifndef ACNLWA_IMGDB_MPSAVER_H
#define ACNLWA_IMGDB_MPSAVER_H

#include "acnlwa/imgdb/JpegMpBaseSaver.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace imgdb {

class MpSaver : public ::imgdb::JpegMpBaseSaver, private ::nn::util::ADLFireWall::NonCopyable< ::imgdb::MpSaver> {
public:
    virtual ~MpSaver();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_MPSAVER_H
