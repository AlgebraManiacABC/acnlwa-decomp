#ifndef ACNLWA_IMGDB_MPENCODER_H
#define ACNLWA_IMGDB_MPENCODER_H

#include "acnlwa/imgdb/JpegMpBaseEncoder.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace imgdb {

class MpEncoder : public ::imgdb::JpegMpBaseEncoder, private ::nn::util::ADLFireWall::NonCopyable< ::imgdb::MpEncoder> {
public:
    virtual ~MpEncoder();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_MPENCODER_H
