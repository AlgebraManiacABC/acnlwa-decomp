#ifndef ACNLWA_IMGDB_JPEGENCODER_H
#define ACNLWA_IMGDB_JPEGENCODER_H

#include "acnlwa/imgdb/JpegMpBaseEncoder.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace imgdb {

class JpegEncoder : public ::imgdb::JpegMpBaseEncoder, private ::nn::util::ADLFireWall::NonCopyable< ::imgdb::JpegEncoder> {
public:
    virtual ~JpegEncoder();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_JPEGENCODER_H
