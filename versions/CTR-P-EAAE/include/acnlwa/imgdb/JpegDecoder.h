#ifndef ACNLWA_IMGDB_JPEGDECODER_H
#define ACNLWA_IMGDB_JPEGDECODER_H

#include "acnlwa/imgdb/JpegMpBaseDecoder.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace imgdb {

class JpegDecoder : public ::imgdb::JpegMpBaseDecoder, private ::nn::util::ADLFireWall::NonCopyable< ::imgdb::JpegDecoder> {
public:
    virtual ~JpegDecoder();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_JPEGDECODER_H
