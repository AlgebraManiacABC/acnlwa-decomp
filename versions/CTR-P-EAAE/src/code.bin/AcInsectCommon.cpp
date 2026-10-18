#include "acnlwa/AcInsectCommon.h"
#include "types.h"

extern "C" {
int FUN_00701694(...);
}

AcInsectCommon::~AcInsectCommon() {}

unsigned int AcInsectCommon::Process_VF03() {}

unsigned int AcInsectCommon::Process_VF06() {}

bool AcInsectCommon::Process_VF08() {}

unsigned int AcInsectCommon::Process_VF09() {}

int AcInsectCommon::Process_VF11() {}

unsigned int AcInsectCommon::Process_VF12() {}

// was FUN_0071866c
void AcInsectCommon::VF17(int param_2)
{
  undefined4 param_1 = (undefined4)this;
  FUN_00701694(param_1,*(undefined1 *)(param_2 + 0xc9),*(undefined2 *)(param_2 + 0xc4));
  return;
}

void AcInsectCommon::VF19() {}

void AcInsectCommon::VF20() {}

void AcInsectCommon::VF21() {}

void AcInsectCommon::VF22() {}

void AcInsectCommon::VF23() {}

void AcInsectCommon::VF24() {}

void AcInsectCommon::VF25() {}

void AcInsectCommon::VF27() {}

void AcInsectCommon::VF29() {}

void AcInsectCommon::VF30() {}

void AcInsectCommon::VF31() {}

void AcInsectCommon::VF32() {}

void AcInsectCommon::VF33() {}

void AcInsectCommon::VF34() {}

void AcInsectCommon::VF36() {}

void AcInsectCommon::VF37() {}

