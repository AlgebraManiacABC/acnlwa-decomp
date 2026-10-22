#ifndef ACNLWA_IMGDB_SYSMAKERNOTE_H
#define ACNLWA_IMGDB_SYSMAKERNOTE_H

// Written by hand: this class has no RTTI, so it is not part of the
// generated scaffold. Only the members used so far are declared.

#include "acnlwa/imgdb/Types.h"
#include "types.h"

namespace imgdb {

class SysMakerNote {
public:
    void SetDistinctionTypeBit(DistinctionTypeBit param_2);
    uint GetShootingType() const;
    uint GetDistinctionTypeBit() const;
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_SYSMAKERNOTE_H
