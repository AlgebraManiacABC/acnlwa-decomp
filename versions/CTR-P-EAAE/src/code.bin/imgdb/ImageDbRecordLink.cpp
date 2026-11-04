#include "acnlwa/imgdb/ImageDbRecordLink.h"
#include "types.h"

namespace imgdb {

void ImageDbRecordLink::SetStorageType(StorageType type)
{
    unk_0x04 = (unk_0x04 & ~STORAGE_TYPE_MASK) | (type & STORAGE_TYPE_MASK);
}

void ImageDbRecordLink::SetDbRecordIndex(int index)
{
    unk_0x00 &= 0x3ffff;
    unk_0x00 |= index << 0x12;
}

}  // namespace imgdb
