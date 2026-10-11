#include "acnlwa/BsLightHemiSphereBase.h"
#include "types.h"

extern "C" {
int FUN_004ee39c(...);
int FUN_00521a2c(...);
}

void BsLightHemiSphereBase::HemiSphereLightHioNode::VF00() {}

BsLightHemiSphereBase::~BsLightHemiSphereBase() {}

unsigned int BsLightHemiSphereBase::Process_VF03() {}

// was FUN_00325578
unsigned int BsLightHemiSphereBase::Process_VF06()
{
  int param_1 = (int)this;
  FUN_004ee39c(param_1 + 0x7c);
  FUN_00521a2c(param_1);
  return 2;
}

unsigned int BsLightHemiSphereBase::Process_VF09() {}

unsigned int BsLightHemiSphereBase::Process_VF12() {}

void BsLightHemiSphereBase::VF16() {}

void BsLightHemiSphereBase::VF17() {}

void BsLightHemiSphereBase::VF20() {}

