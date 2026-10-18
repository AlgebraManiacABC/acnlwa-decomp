#include "acnlwa/AcNpcSpMaiko.h"
#include "types.h"

extern "C" {
int FUN_001abbbc(...);
int FUN_00205d80(...);
int FUN_002f74e0(...);
int FUN_00605160(...);
int GET_BYTE_00957322(...);
}

AcNpcSpMaiko::TalkRecept::~TalkRecept() {}

void AcNpcSpMaiko::TalkRecept::VF65() {}

unsigned int AcNpcSpMaiko::TalkRecept::VF80() {}

unsigned int AcNpcSpMaiko::TalkRecept::VF81() {}

unsigned int AcNpcSpMaiko::TalkRecept::VF83() {}

AcNpcSpMaiko::~AcNpcSpMaiko() {}

unsigned int AcNpcSpMaiko::Process_VF09()
{
    if (FUN_002f74e0(
            0x400000,
            GET_BYTE_00957322()
        ))
    {
        FUN_001abbbc(&this->unk_0x014);
        FUN_00205d80(&this->unk_0x1dd4);
    }
    return this->AcNpcSp::Process_VF09();
}

unsigned int AcNpcSpMaiko::DemoActor_VF19() {}

unsigned int AcNpcSpMaiko::DemoActor_VF25() {}

unsigned int AcNpcSpMaiko::UtlBase_VF30() {}

unsigned int AcNpcSpMaiko::UtlBase_VF31() {}

void AcNpcSpMaiko::UtlBase_VF32() {}

unsigned int AcNpcSpMaiko::UtlBase_VF34() {}

void AcNpcSpMaiko::VF36() {}

unsigned int AcNpcSpMaiko::VF50() {}

void AcNpcSpMaiko::VF69() {}

void AcNpcSpMaiko::VF71() {}

void AcNpcSpMaiko::VF72() {}

unsigned int AcNpcSpMaiko::VF81() {}

