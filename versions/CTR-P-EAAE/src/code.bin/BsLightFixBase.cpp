#include "acnlwa/BsLightFixBase.h"
#include "types.h"

extern "C" {
int FUN_004ed3dc(...);
int FUN_00521a2c(...);
}

void BsLightFixBase::FixLightHioNode::VF00() {}

BsLightFixBase::~BsLightFixBase() {}

unsigned int BsLightFixBase::Process_VF03() {}

// was FUN_0025654c
unsigned int BsLightFixBase::Process_VF06()
{
  int param_1 = (int)this;
  FUN_004ed3dc(param_1 + 0x5c);
  FUN_00521a2c(param_1);
  return 2;
}

unsigned int BsLightFixBase::Process_VF09() {}

unsigned int BsLightFixBase::Process_VF12() {}

void BsLightFixBase::VF16() {}

void BsLightFixBase::VF17() {}

void BsLightFixBase::VF18() {}

void BsLightFixBase::VF19() {}

void BsLightFixBase::VF20() {}

