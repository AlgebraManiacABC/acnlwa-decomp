#ifndef ACNLWA_IMGDB_SYSMAKERNOTE_H
#define ACNLWA_IMGDB_SYSMAKERNOTE_H

#include "acnlwa/imgdb/Enums.h"
#include "types.h"

namespace imgdb {

class SysMakerNote {
public:
    void SetDistinctionTypeBit(DistinctionTypeBit param_2);
    uint GetShootingType() const;
    uint GetDistinctionTypeBit() const;

    private:
    char unk_0x00[0x30];
    uint unk_0x30;
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_SYSMAKERNOTE_H
