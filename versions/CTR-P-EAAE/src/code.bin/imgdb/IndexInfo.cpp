#include "acnlwa/imgdb/IndexInfo.h"
#include "types.h"

namespace imgdb {

// was FUN_00755718
bool IndexInfo::IsValidDirectoryIndex() const
{
  ushort *param_1 = (ushort *)this;
  return *param_1 < 900;
}

}  // namespace imgdb
