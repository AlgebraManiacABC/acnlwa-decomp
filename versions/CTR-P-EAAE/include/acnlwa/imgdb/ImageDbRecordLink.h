#ifndef ACNLWA_IMGDB_IMAGEDBRECORDLINK_H
#define ACNLWA_IMGDB_IMAGEDBRECORDLINK_H

// Written by hand: this class has no RTTI, so it is not part of the
// generated scaffold. Only the members used so far are declared.

#include "types.h"
#include "acnlwa/imgdb/Enums.h"

namespace imgdb {

class ImageDbRecordLink {
public:
    void SetStorageType(StorageType param_2);
    void SetDbRecordIndex(int param_2);

    private:
    uint unk_0x00;
    uint unk_0x04;
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_IMAGEDBRECORDLINK_H
