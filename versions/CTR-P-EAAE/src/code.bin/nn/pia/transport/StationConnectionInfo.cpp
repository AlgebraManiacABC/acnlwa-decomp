#include "acnlwa/nn/pia/transport/StationConnectionInfo.h"
#include "types.h"

extern "C" {
int FUN_00734638(...);
}

namespace nn {
namespace pia {
namespace transport {

StationConnectionInfo::~StationConnectionInfo() {}

// was FUN_00735570
int StationConnectionInfo::VF02()
{
  int param_1 = (int)this;
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00734638(param_1 + 4);
  iVar2 = FUN_00734638(param_1 + 0x2c);
  return iVar2 + iVar1;
}

void StationConnectionInfo::VF03() {}

void StationConnectionInfo::VF04() {}

void StationConnectionInfo::VF05() {}

void StationConnectionInfo::VF06() {}

void StationConnectionInfo::VF07() {}

void StationConnectionInfo::VF08() {}

}  // namespace transport
}  // namespace pia
}  // namespace nn
