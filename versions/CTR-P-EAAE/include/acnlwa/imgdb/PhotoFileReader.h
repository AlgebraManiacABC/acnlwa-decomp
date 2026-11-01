#ifndef ACNLWA_IMGDB_PHOTOFILEREADER_H
#define ACNLWA_IMGDB_PHOTOFILEREADER_H

#include "acnlwa/imgdb/FileReader.h"

namespace imgdb {

class PhotoFileReader : public ::imgdb::FileReader {
public:
    virtual ~PhotoFileReader();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_PHOTOFILEREADER_H
