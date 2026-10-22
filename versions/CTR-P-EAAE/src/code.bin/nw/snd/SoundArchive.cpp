#include "acnlwa/nw/snd/SoundArchive.h"
#include "types.h"

namespace nw {
namespace snd {

SoundArchive::~SoundArchive() {}

// was FUN_00138c88
bool SoundArchive::IsAvailable() const
{
  int param_1 = (int)this;
  return *(int *)(param_1 + 4) != 0;
}

}  // namespace snd
}  // namespace nw
