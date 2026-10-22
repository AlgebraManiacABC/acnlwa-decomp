#include "acnlwa/imgdb/ImageDbRecordParam.h"
#include "acnlwa/imgdb/DateTimeSeconds.h"
#include "types.h"

extern "C" {
void __rt_memclr_w(...);
}

namespace imgdb {

// was FUN_005aa7c0
void ImageDbRecordParam::Initialize()
{
  int param_1 = (int)this;
  __rt_memclr_w(param_1,0x6c);
  ((DateTimeSeconds *)param_1)->Initialize();
  *(undefined1 *)(param_1 + 0xd) = 4;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

// was FUN_00754cc0
bool ImageDbRecordParam::IsValidBodyId(BodyIdType param_2) const
{
  int param_1 = (int)this;
  return ((uint)*(byte *)(param_1 + 0xf) & 1 << ((uint)param_2 & 0xff)) != 0;
}

}  // namespace imgdb
