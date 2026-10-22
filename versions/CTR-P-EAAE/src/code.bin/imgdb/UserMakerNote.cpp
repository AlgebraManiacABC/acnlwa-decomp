#include "acnlwa/imgdb/UserMakerNote.h"
#include "types.h"

namespace imgdb {

// was FUN_005a6c4c
int UserMakerNote::GetFaceInfo(int param_2)
{
  int param_1 = (int)this;
  return param_1 + param_2 * 0x12 + 8;
}

}  // namespace imgdb
