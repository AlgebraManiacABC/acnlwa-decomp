#ifndef ACNLWA_IMGDB_PHOTOHEADERFILEREADER_H
#define ACNLWA_IMGDB_PHOTOHEADERFILEREADER_H

#include "acnlwa/imgdb/FileReader.h"

namespace imgdb {

class PhotoHeaderFileReader : public ::imgdb::FileReader {
public:
    virtual ~PhotoHeaderFileReader();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_PHOTOHEADERFILEREADER_H
