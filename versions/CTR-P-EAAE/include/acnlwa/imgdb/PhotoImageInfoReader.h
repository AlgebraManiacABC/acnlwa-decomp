#ifndef ACNLWA_IMGDB_PHOTOIMAGEINFOREADER_H
#define ACNLWA_IMGDB_PHOTOIMAGEINFOREADER_H

#include "acnlwa/imgdb/PhotoFileReader.h"

namespace imgdb {

class PhotoImageInfoReader : private ::imgdb::PhotoFileReader {
public:
    virtual ~PhotoImageInfoReader();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_PHOTOIMAGEINFOREADER_H
