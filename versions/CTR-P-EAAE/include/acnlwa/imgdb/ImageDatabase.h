#ifndef ACNLWA_IMGDB_IMAGEDATABASE_H
#define ACNLWA_IMGDB_IMAGEDATABASE_H

#include "acnlwa/imgdb/Singleton.h"

namespace imgdb {

class ImageDatabase : public ::imgdb::Singleton< ::imgdb::ImageDatabase> {
public:
    virtual ~ImageDatabase();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_IMAGEDATABASE_H
