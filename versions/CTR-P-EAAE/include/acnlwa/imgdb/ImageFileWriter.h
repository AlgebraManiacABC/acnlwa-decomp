#ifndef ACNLWA_IMGDB_IMAGEFILEWRITER_H
#define ACNLWA_IMGDB_IMAGEFILEWRITER_H

#include "acnlwa/imgdb/FileWriter.h"

namespace imgdb {

class ImageFileWriter : private ::imgdb::FileWriter {
public:
    virtual ~ImageFileWriter();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_IMAGEFILEWRITER_H
