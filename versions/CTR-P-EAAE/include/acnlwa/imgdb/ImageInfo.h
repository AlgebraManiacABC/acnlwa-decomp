#ifndef ACNLWA_IMGDB_IMAGEINFO_H
#define ACNLWA_IMGDB_IMAGEINFO_H

#include "acnlwa/imgdb/Enums.h"
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
