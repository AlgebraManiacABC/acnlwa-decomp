#include "acnlwa/AcNpc.h"
#include "types.h"

extern "C" {
int FUN_006e8560(...);
int FUN_0020ad08(...);
}

void AcNpc::WanderSearchCandCB::VF00() {}

AcNpc::~AcNpc() {}

void AcNpc::Process_VF04() {}

unsigned int AcNpc::Process_VF09() {}

unsigned int AcNpc::Process_VF12() {}

unsigned char AcNpc::DemoActor_VF18() {}

unsigned int AcNpc::DemoActor_VF20() {}

int AcNpc::DemoActor_VF22() {}

unsigned int AcNpc::DemoActor_VF23() {}

unsigned int AcNpc::DemoActor_VF24() {}

unsigned int AcNpc::DemoActor_VF26() {}

// was FUN_0057813c
bool AcNpc::DemoActor_VF27()
{
  int param_1 = (int)this;
  return *(int *)(*(int *)(param_1 + 0x660) + 0xf8) != 0;
}

unsigned int AcNpc::DemoActor_VF28() {}

unsigned int AcNpc::UtlBase_VF30() {}

unsigned int AcNpc::UtlBase_VF31() {}

void AcNpc::UtlBase_VF32() {}

unsigned int AcNpc::UtlBase_VF33() {}

unsigned int AcNpc::UtlBase_VF34() {}

unsigned int AcNpc::UtlBase_VF35() {}

// was FUN_00577998
void AcNpc::VF36()
{}

// was FUN_00577f34
void AcNpc::VF37()
{}

// was FUN_00752260
unsigned int AcNpc::VF38()
{
  return 1;
}

void AcNpc::VF39() {}

// was FUN_00579a2c
void AcNpc::VF40()
{
  int param_1 = (int)this;
  FUN_0020ad08(param_1 + 0x9b4,1);
  return;
}

// was FUN_005793d0
void AcNpc::VF41()
{
  int param_1 = (int)this;
  FUN_0020ad08(param_1 + 0x9b4,0);
  return;
}

void AcNpc::VF42() {}

void AcNpc::VF43() {}

void AcNpc::VF44() {}

void AcNpc::VF45() {}

void AcNpc::VF46() {}

void AcNpc::VF47() {}

void AcNpc::VF48() {}

unsigned int AcNpc::VF49() {}

// was FUN_00578850
unsigned int AcNpc::VF50()
{
  return 0;
}

void AcNpc::VF51() {}

void AcNpc::VF52() {}

void AcNpc::VF53() {}

void AcNpc::VF54() {}

void AcNpc::VF55() {}

void AcNpc::VF56() {}

void AcNpc::VF57() {}

// was FUN_0057b48c
unsigned int AcNpc::VF58()
{
  return 2;
}

void AcNpc::VF59() {}

void AcNpc::VF60() {}

void AcNpc::VF61() {}

void AcNpc::VF62() {}

void AcNpc::VF63() {}

void AcNpc::VF64() {}

void AcNpc::VF65() {}

void AcNpc::VF66() {}

void AcNpc::VF67() {}

void AcNpc::VF68() {}

// was FUN_005791bc
void AcNpc::VF69()
{}

// was FUN_0057b494
void AcNpc::VF70()
{}

void AcNpc::VF71() {}

void AcNpc::VF72() {}

void AcNpc::VF73() {}

void AcNpc::VF74() {}

void AcNpc::VF75() {}

// was FUN_005791c0
void AcNpc::VF76()
{}

void AcNpc::VF77() {}

// was FUN_0057884c
void AcNpc::VF78()
{}

// was FUN_0057799c
void AcNpc::VF79()
{}

void AcNpc::VF80() {}

// was FUN_00577a24
unsigned int AcNpc::VF81()
{
  return 1;
}

// was FUN_00578c6c
unsigned int AcNpc::VF82()
{
  int param_1 = (int)this;
  if (*(int *)(param_1 + 0xaa0) != 0) {
    FUN_006e8560(param_1 + 0x78);
  }
  return 1;
}

void AcNpc::VF83() {}

void AcNpc::VF84() {}

void AcNpc::VF85() {}

void AcNpc::VF86() {}

void AcNpc::VF87() {}

void AcNpc::VF88() {}

