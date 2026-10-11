#include "acnlwa/nn/pia/session/CommonMatchmakeSession.h"
#include "types.h"

namespace nn {
namespace pia {
namespace session {

CommonMatchmakeSession::~CommonMatchmakeSession() {}

// was FUN_004409ac
void CommonMatchmakeSession::VF02()
{
  int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

void CommonMatchmakeSession::VF26() {}

void CommonMatchmakeSession::VF27() {}

void CommonMatchmakeSession::VF28() {}

void CommonMatchmakeSession::VF32() {}

void CommonMatchmakeSession::VF33() {}

void CommonMatchmakeSession::VF34() {}

void CommonMatchmakeSession::VF35() {}

void CommonMatchmakeSession::VF36() {}

void CommonMatchmakeSession::VF37() {}

void CommonMatchmakeSession::VF38() {}

void CommonMatchmakeSession::VF39() {}

void CommonMatchmakeSession::VF40() {}

}  // namespace session
}  // namespace pia
}  // namespace nn
