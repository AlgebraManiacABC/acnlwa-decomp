#include "acnlwa/AcNpc.h"
#include "types.h"

extern "C" {
int FUN_006e8560(...);
int FUN_0020ad08(...);
}

void AcNpc::WanderSearchCandCB::VF00() {}

AcNpc::~AcNpc() {}

void AcNpc::Process_VF04() {}

unsigned int AcNpc::Process_VF09()
{
	return 2;
}

unsigned int AcNpc::Process_VF12() {}

unsigned char AcNpc::DemoActor_VF18() {}

unsigned int AcNpc::DemoActor_VF20() {}

int * AcNpc::DemoActor_VF22() {}

unsigned int AcNpc::DemoActor_VF23() {}

unsigned int AcNpc::DemoActor_VF24() {}

unsigned int AcNpc::DemoActor_VF26() {}

// was FUN_0057813c
bool AcNpc::DemoActor_VF27()
{
    return this->unk_0x660[0x3e] != 0;
}

unsigned int AcNpc::DemoActor_VF28() {}

unsigned int AcNpc::UtlBase_VF30() {}

unsigned int AcNpc::UtlBase_VF31() {}

void AcNpc::UtlBase_VF32() {}

unsigned int AcNpc::UtlBase_VF33() {}

unsigned int AcNpc::UtlBase_VF34() {}

unsigned int AcNpc::UtlBase_VF35() {}

void AcNpc::VF36()
{
	return;
}

void AcNpc::VF37()
{
	return;
}

unsigned int AcNpc::VF38()
{
	return 1;
}

void AcNpc::VF39() {}

void AcNpc::VF40()
{
    FUN_0020ad08(&this->unk_0x9b4,1);
}

void AcNpc::VF41()
{
    FUN_0020ad08(&this->unk_0x9b4,0);
}

void AcNpc::VF42() {}

void AcNpc::VF43() {}

void AcNpc::VF44() {}

void AcNpc::VF45() {}

void AcNpc::VF46() {}

void AcNpc::VF47() {}

void AcNpc::VF48() {}

unsigned int AcNpc::VF49() {}

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

void AcNpc::VF69()
{
	return;
}

void AcNpc::VF70()
{
	return;
}

void AcNpc::VF71() {}

void AcNpc::VF72() {}

void AcNpc::VF73() {}

void AcNpc::VF74() {}

void AcNpc::VF75() {}

void AcNpc::VF76()
{
	return;
}

void AcNpc::VF77() {}

void AcNpc::VF78()
{
	return;
}

void AcNpc::VF79()
{
	return;
}

void AcNpc::VF80() {}

unsigned int AcNpc::VF81()
{
  return 1;
}

unsigned int AcNpc::VF82()
{
    if (this->unk_0xaa0 != 0) {
        FUN_006e8560(&this->unk_0x078);
    }
    return 1;
}

void AcNpc::VF83() {}

void AcNpc::VF84() {}

void AcNpc::VF85() {}

void AcNpc::VF86() {}

void AcNpc::VF87() {}

void AcNpc::VF88() {}

