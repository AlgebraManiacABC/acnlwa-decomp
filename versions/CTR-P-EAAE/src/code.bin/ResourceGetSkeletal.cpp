#include "acnlwa/ResourceGetSkeletal.h"
#include "types.h"

extern "C" {
int FUN_004edd20(...);
int FUN_004ee4c8(...);
int FUN_004f1294(...);
}

ResourceGetSkeletal::~ResourceGetSkeletal() {}

void ResourceGetSkeletal::ResourceGetSkeletal_VF02() {}

void ResourceGetSkeletal::ResourceGetSkeletal_VF03() {}

// was FUN_002fbe58
void ResourceGetSkeletal::ResourceGetSkeletal_VF04()
{
  int param_1 = (int)this;
  FUN_004ee4c8(param_1 + 4);
  if (*(char *)(param_1 + 0x2d) != '\0') {
    FUN_004f1294(param_1 + 4);
  }
  FUN_004edd20(param_1 + 4);
  return;
}

void ResourceGetSkeletal::ResourceGetSkeletal_VF05() {}

void ResourceGetSkeletal::ResourceGetSkeletal_VF06() {}

void ResourceGetSkeletal::ResourceGetSkeletal_VF07() {}

void ResourceGetSkeletal::ResourceGetSkeletal_VF08() {}

