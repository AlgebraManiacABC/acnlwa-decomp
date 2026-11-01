#ifndef ACNLWA_IMGDB_PICTUREDBRECORD_H
#define ACNLWA_IMGDB_PICTUREDBRECORD_H

#include "acnlwa/imgdb/ImageDbRecord.h"

namespace imgdb {

class PictureDbRecord : public ::imgdb::ImageDbRecord {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_PICTUREDBRECORD_H
