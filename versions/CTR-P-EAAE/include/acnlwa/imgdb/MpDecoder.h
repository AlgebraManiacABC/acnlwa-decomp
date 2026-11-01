#ifndef ACNLWA_IMGDB_MPDECODER_H
#define ACNLWA_IMGDB_MPDECODER_H

#include "acnlwa/imgdb/JpegMpBaseDecoder.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace imgdb {

class MpDecoder : public ::imgdb::JpegMpBaseDecoder, private ::nn::util::ADLFireWall::NonCopyable< ::imgdb::MpDecoder> {
public:
    virtual ~MpDecoder();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_MPDECODER_H
