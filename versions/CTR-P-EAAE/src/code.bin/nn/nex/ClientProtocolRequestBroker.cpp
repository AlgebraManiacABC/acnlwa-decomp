#include "acnlwa/nn/nex/ClientProtocolRequestBroker.h"
#include "types.h"

extern "C" {
int FUN_003bc044(...);
}

namespace nn {
namespace nex {

ClientProtocolRequestBroker::~ClientProtocolRequestBroker() {}

// was FUN_003bbd78
void ClientProtocolRequestBroker::VF02(unsigned int param_2, unsigned int param_3)
{
  int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x7c) = param_3;
  FUN_003bc044();
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}

void ClientProtocolRequestBroker::VF03() {}

void ClientProtocolRequestBroker::VF04() {}

void ClientProtocolRequestBroker::VF05() {}

void ClientProtocolRequestBroker::VF06() {}

void ClientProtocolRequestBroker::VF07() {}

void ClientProtocolRequestBroker::VF08() {}

void ClientProtocolRequestBroker::VF09() {}

void ClientProtocolRequestBroker::VF10() {}

void ClientProtocolRequestBroker::VF11() {}

void ClientProtocolRequestBroker::VF12() {}

void ClientProtocolRequestBroker::VF13() {}

void ClientProtocolRequestBroker::VF14() {}

void ClientProtocolRequestBroker::VF15() {}

void ClientProtocolRequestBroker::VF16() {}

}  // namespace nex
}  // namespace nn
