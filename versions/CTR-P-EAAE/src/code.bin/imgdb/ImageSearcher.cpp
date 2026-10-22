#include "acnlwa/imgdb/ImageSearcher.h"
#include "acnlwa/imgdb/ImageInfo.h"
#include "types.h"

namespace imgdb {

// was FUN_005a6b8c
ImageSearcher::ImageSearcher()
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[2] = 0;
  param_1[3] = 0;
  ((ImageInfo *)(param_1 + 4))->Initialize();
}

}  // namespace imgdb
