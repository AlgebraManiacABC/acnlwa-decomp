#include "acnlwa/BsSeadParticleDrawMinigame.h"
#include "types.h"

extern "C" {
int FUN_0020714c(...);
int FUN_0020763c(...);
int FUN_0032f36c(...);
int FUN_00207710(...);
int FUN_0032f778(...);
}

BsSeadParticleDrawMinigame::~BsSeadParticleDrawMinigame() {}

// was FUN_003424f4
unsigned int BsSeadParticleDrawMinigame::Process_VF03()
{
  undefined4 param_1 = (undefined4)this;
  FUN_0020714c();
  FUN_0020763c();
  FUN_0032f36c(param_1);
  return;
}

// was FUN_00342514
unsigned int BsSeadParticleDrawMinigame::Process_VF06()
{
  undefined4 param_1 = (undefined4)this;
  FUN_0020714c();
  FUN_00207710();
  FUN_0032f778(param_1);
  return;
}

unsigned int BsSeadParticleDrawMinigame::Process_VF09()
{
	return this->BsSeadParticleDrawBase::Process_VF09();
}

unsigned int BsSeadParticleDrawMinigame::Process_VF12() {}

unsigned char BsSeadParticleDrawMinigame::VF17() {}

unsigned char BsSeadParticleDrawMinigame::VF18() {}

unsigned char BsSeadParticleDrawMinigame::VF19() {}

void BsSeadParticleDrawMinigame::VF20() {}

