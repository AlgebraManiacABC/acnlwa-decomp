#include "acnlwa/fgobj/ObjectStumpAnim.h"
#include "types.h"

extern "C" {
int FUN_002e6368(...);
int FUN_00590ad8(...);
}

namespace fgobj {

ObjectStumpAnim::~ObjectStumpAnim() {}

// was FUN_00595e20
void ObjectStumpAnim::VF05()
{
  int param_1 = (int)this;
  if ((*(int *)(param_1 + 0x168) != 0) &&
     (*(int *)(param_1 + 0x16c) == *(int *)(*(int *)(param_1 + 0x168) + 0xc))) {
    FUN_002e6368(param_1 + 0x15c);
  }
  if ((*(int *)(param_1 + 0x180) != 0) &&
     (*(int *)(param_1 + 0x184) == *(int *)(*(int *)(param_1 + 0x180) + 0xc))) {
    FUN_002e6368(param_1 + 0x174);
  }
  if ((*(int *)(param_1 + 0x198) != 0) &&
     (*(int *)(param_1 + 0x19c) == *(int *)(*(int *)(param_1 + 0x198) + 0xc))) {
    FUN_002e6368(param_1 + 0x18c);
  }
  FUN_00590ad8(param_1);
  return;
}

void ObjectStumpAnim::VF08() {}

}  // namespace fgobj
