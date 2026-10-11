#include "acnlwa/nn/pia/local/LocalSessionInfo.h"
#include "types.h"

namespace nn {
namespace pia {
namespace local {

LocalSessionInfo::~LocalSessionInfo() {}

void LocalSessionInfo::VF05() {}

// was FUN_004165c0
void LocalSessionInfo::VF08()
{
  int param_1 = (int)this;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

void LocalSessionInfo::VF12() {}

}  // namespace local
}  // namespace pia
}  // namespace nn
