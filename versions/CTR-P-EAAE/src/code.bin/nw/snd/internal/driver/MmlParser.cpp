#include "acnlwa/nw/snd/internal/driver/MmlParser.h"
#include "types.h"

extern "C" {
int FUN_004cbd80(...);
}

namespace nw {
namespace snd {
namespace internal {
namespace driver {

MmlParser::~MmlParser() {}

void MmlParser::VF02() {}

// was FUN_007418c4
void MmlParser::VF03(unsigned int param_2, unsigned int param_3, unsigned int param_4, unsigned int param_5, unsigned int param_6)
{
  undefined4 param_1 = (undefined4)this;
  FUN_004cbd80(param_2,param_3,param_4,param_5,param_6);
  return;
}

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw
