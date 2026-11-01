#ifndef ACNLWA_IMGDB_JPEGMPBASEENCODER_H
#define ACNLWA_IMGDB_JPEGMPBASEENCODER_H

namespace imgdb {

class JpegMpBaseEncoder {
public:
    virtual void VF00() = 0;
    virtual void VF01() = 0;
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_JPEGMPBASEENCODER_H
