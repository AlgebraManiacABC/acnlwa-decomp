#include "acnlwa/imgdb/PictureTableRecord.h"
#include "acnlwa/imgdb/ImageInfo.h"
#include "acnlwa/imgdb/FaceInfo.h"
#include "types.h"

namespace imgdb {

// was FUN_005aa848
void PictureTableRecord::Initialize()
{
  int param_1 = (int)this;
  int iVar1;
  
  ((ImageInfo *)param_1)->Initialize();
  iVar1 = 0;
  do {
    ((FaceInfo *)(param_1 + iVar1 * 0x12 + 0x50))->Initialize();
    iVar1 += 1;
  } while (iVar1 < 4);
  return;
}

}  // namespace imgdb
