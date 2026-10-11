#include "acnlwa/ResourceLoadSkeletal.h"
#include "types.h"

extern "C" {
int FUN_002f73b8(...);
int FUN_004ecec8(...);
int FUN_004f1270(...);
}

ResourceLoadSkeletal::~ResourceLoadSkeletal() {}

// was FUN_00321840
void ResourceLoadSkeletal::ResourceGetSkeletal_VF03()
{
  int param_1 = (int)this;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_004ecec8(param_1 + 0x10);
          // WARNING: Subroutine does not return
    FUN_004f1270(param_1 + 4);
  }
  FUN_002f73b8(param_1 + 0x30);
  return;
}

void ResourceLoadSkeletal::ResourceGetSkeletal_VF04() {}

void ResourceLoadSkeletal::ResourceLoadSkeletal_VF09() {}

void ResourceLoadSkeletal::ResourceLoadSkeletal_VF10() {}

