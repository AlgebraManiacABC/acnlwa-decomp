#include "acnlwa/BsLightDiffuseBase.h"
#include "types.h"

extern "C" {
int FUN_004ed3dc(...);
int FUN_00521a2c(...);
}

void BsLightDiffuseBase::DiffuseLightHioNode::VF00() {}

BsLightDiffuseBase::~BsLightDiffuseBase() {}

unsigned int BsLightDiffuseBase::Process_VF03() {}

// was FUN_002d6fc0
unsigned int BsLightDiffuseBase::Process_VF06()
{
  int param_1 = (int)this;
  FUN_004ed3dc(param_1 + 0xb4);
  FUN_00521a2c(param_1);
  return 2;
}

unsigned int BsLightDiffuseBase::Process_VF09() {}

unsigned int BsLightDiffuseBase::Process_VF12() {}

void BsLightDiffuseBase::VF16() {}

void BsLightDiffuseBase::VF17() {}

void BsLightDiffuseBase::VF19() {}

void BsLightDiffuseBase::VF20() {}

// was FUN_002d6cc0
void BsLightDiffuseBase::VF21()
{}

void BsLightDiffuseBase::VF22() {}

void BsLightDiffuseBase::VF25() {}

