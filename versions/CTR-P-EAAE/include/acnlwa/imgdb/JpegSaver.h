#ifndef ACNLWA_IMGDB_JPEGSAVER_H
#define ACNLWA_IMGDB_JPEGSAVER_H

#include "acnlwa/imgdb/JpegMpBaseSaver.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace imgdb {

class JpegSaver : public ::imgdb::JpegMpBaseSaver, private ::nn::util::ADLFireWall::NonCopyable< ::imgdb::JpegSaver> {
public:
    virtual ~JpegSaver();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_JPEGSAVER_H
