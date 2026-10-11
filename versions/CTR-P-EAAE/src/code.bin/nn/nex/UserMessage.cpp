#include "acnlwa/nn/nex/UserMessage.h"
#include "types.h"

extern "C" {
int FUN_00360e18(...);
int FUN_00360e88(...);
int FUN_003d97fc(...);
}

namespace nn {
namespace nex {

UserMessage::~UserMessage() {}

// was FUN_0035bdd0
void UserMessage::VF08()
{
  undefined4 param_1 = (undefined4)this;
  undefined1 auStack_220 [536];
  
  FUN_00360e18(auStack_220);
  FUN_003d97fc(auStack_220,param_1);
  FUN_00360e88(auStack_220);
  return;
}

}  // namespace nex
}  // namespace nn
