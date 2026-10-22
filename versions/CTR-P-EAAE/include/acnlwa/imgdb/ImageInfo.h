#ifndef ACNLWA_IMGDB_IMAGEINFO_H
#define ACNLWA_IMGDB_IMAGEINFO_H

// Written by hand: this class has no RTTI, so it is not part of the
// generated scaffold. Only the members used so far are declared.

#include "acnlwa/imgdb/Types.h"
#include "types.h"

namespace imgdb {

class ImageInfo {
public:
    void Initialize();
    void SetShootingType(ShootingType param_2);
    void SetHandleTypeBit(HandleTypeBit param_2);
    void SetDistinctionTypeBit(DistinctionTypeBit param_2);
    uint GetHandleTypeBit() const;
    uint GetSaveProcessType() const;
    undefined4 ValidateWithoutPath() const;
    uint GetDistinctionTypeBit() const;
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_IMAGEINFO_H
