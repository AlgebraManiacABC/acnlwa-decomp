#ifndef ACNLWA_IMGDB_FILEWRITER_H
#define ACNLWA_IMGDB_FILEWRITER_H

#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace imgdb {

class FileWriter : private ::nn::util::ADLFireWall::NonCopyable< ::imgdb::FileWriter> {
public:
    virtual ~FileWriter();
    virtual void VF02();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_FILEWRITER_H
