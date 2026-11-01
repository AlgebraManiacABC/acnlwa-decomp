#ifndef ACNLWA_IMGDB_PHOTOHEADERIMAGEINFOREADER_H
#define ACNLWA_IMGDB_PHOTOHEADERIMAGEINFOREADER_H

#include "acnlwa/imgdb/PhotoHeaderFileReader.h"

namespace imgdb {

class PhotoHeaderImageInfoReader : private ::imgdb::PhotoHeaderFileReader {
public:
    virtual ~PhotoHeaderImageInfoReader();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_PHOTOHEADERIMAGEINFOREADER_H
