#include "acnlwa/nn/pia/session/JoinSessionJob.h"
#include "types.h"

extern "C" {
int FUN_004261f4(...);
int FUN_0042632c(...);
}

namespace nn {
namespace pia {
namespace session {

JoinSessionJob::~JoinSessionJob() {}

void JoinSessionJob::VF05() {}

void JoinSessionJob::VF06() {}

void JoinSessionJob::VF07() {}

// was FUN_004316ec
void JoinSessionJob::VF08()
{
  int param_1 = (int)this;
  FUN_004261f4(param_1 + 0x44);
  FUN_0042632c(param_1 + 0x44);
  return;
}

void JoinSessionJob::VF09() {}

void JoinSessionJob::VF10() {}

void JoinSessionJob::VF11() {}

void JoinSessionJob::VF13() {}

}  // namespace session
}  // namespace pia
}  // namespace nn
