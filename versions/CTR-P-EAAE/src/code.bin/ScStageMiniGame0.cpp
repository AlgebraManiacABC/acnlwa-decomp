#include "acnlwa/ScStageMiniGame0.h"
#include "types.h"

extern "C" {
int FUN_006d3a24(...);
}

ScStageMiniGame0::~ScStageMiniGame0() {}

int ScStageMiniGame0::Process_VF02() {}

unsigned int ScStageMiniGame0::Process_VF03() {}

void ScStageMiniGame0::Process_VF04() {}

int ScStageMiniGame0::Process_VF05() {}

unsigned int ScStageMiniGame0::Process_VF06() {}

void ScStageMiniGame0::Process_VF07() {}

bool ScStageMiniGame0::Process_VF08() {}

unsigned int ScStageMiniGame0::Process_VF09() {}

void ScStageMiniGame0::Process_VF10() {}

int ScStageMiniGame0::Process_VF11() {}

unsigned int ScStageMiniGame0::Process_VF12() {}

void ScStageMiniGame0::Process_VF13() {}

void ScStageMiniGame0::Base_VF15() {}

void ScStageMiniGame0::Actor_VF16() {}

void ScStageMiniGame0::DemoActor_VF17() {}

unsigned char ScStageMiniGame0::DemoActor_VF18() {}

unsigned int ScStageMiniGame0::DemoActor_VF19() {}

unsigned int ScStageMiniGame0::DemoActor_VF20() {}

// was FUN_002bc584
unsigned int ScStageMiniGame0::DemoActor_VF21()
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006d3a24();
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

int * ScStageMiniGame0::DemoActor_VF22() {}

