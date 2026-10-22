#ifndef ACNLWA_IMGDB_IMAGEDBRECORDPARAM_H
#define ACNLWA_IMGDB_IMAGEDBRECORDPARAM_H

// Written by hand: this class has no RTTI, so it is not part of the
// generated scaffold. Only the members used so far are declared.

#include "acnlwa/imgdb/Types.h"

namespace imgdb {

class ImageDbRecordParam {
public:
    void Initialize();
    bool IsValidBodyId(BodyIdType param_2) const;
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_IMAGEDBRECORDPARAM_H
