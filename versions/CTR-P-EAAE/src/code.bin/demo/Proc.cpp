#include "acnlwa/demo/Proc.h"
#include "types.h"

extern "C" {
int FUN_0052bdec(...);
int FUN_0052bedc(...);
int FUN_0052d950(...);
int FUN_0052da4c(...);
int FUN_0052daa0(...);
}

namespace demo {

Proc::~Proc() {}

unsigned int Proc::Process_VF03() {}

unsigned int Proc::Process_VF06() {}

// was FUN_0052d4fc
unsigned int Proc::Process_VF09()
{
  FUN_0052da4c();
  FUN_0052d950();
  FUN_0052bedc();
  FUN_0052bdec();
  FUN_0052daa0();
  return 2;
}

unsigned int Proc::Process_VF12() {}

}  // namespace demo
