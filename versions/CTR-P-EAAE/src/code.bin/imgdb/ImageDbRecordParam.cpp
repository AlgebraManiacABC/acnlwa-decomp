#include "acnlwa/imgdb/ImageDbRecordParam.h"
#include "acnlwa/imgdb/DateTimeSeconds.h"
#include "types.h"

extern "C" {
void __rt_memclr_w(...);
}

namespace imgdb {

void ImageDbRecordParam::Initialize()
{
    __rt_memclr_w(this,0x6c);
    unk_0x00.Initialize();
    unk_0x0d = 4;
    unk_0x20 = 0;
    return;
}

bool ImageDbRecordParam::IsValidBodyId(BodyIdType type) const
{
    return (unk_0x0f & (1 << type)) != 0;
}

}  // namespace imgdb
