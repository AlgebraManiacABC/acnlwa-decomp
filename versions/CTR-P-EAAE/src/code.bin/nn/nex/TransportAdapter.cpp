#include "acnlwa/nn/nex/TransportAdapter.h"
#include "types.h"

extern "C" {
int FUN_00357108(...);
}

namespace nn {
namespace nex {

TransportAdapter::~TransportAdapter() {}

void TransportAdapter::VF02() {}

void TransportAdapter::VF03() {}

void TransportAdapter::VF04() {}

void TransportAdapter::VF05() {}

void TransportAdapter::VF06() {}

void TransportAdapter::VF07() {}

void TransportAdapter::VF08() {}

void TransportAdapter::VF09() {}

void TransportAdapter::VF10() {}

// was FUN_003837f0
unsigned int TransportAdapter::VF11(int param_2)
{
  int param_1 = (int)this;
  FUN_00357108(param_1 + 0x48,*(undefined4 *)(param_2 + 4));
  return 1;
}

void TransportAdapter::VF12() {}

}  // namespace nex
}  // namespace nn
