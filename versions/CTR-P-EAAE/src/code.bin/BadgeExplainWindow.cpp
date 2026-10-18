#include "acnlwa/BadgeExplainWindow.h"
#include "types.h"

extern "C" {
int FUN_001cb78c(...);
int FUN_005d6bfc(...);
int FUN_005e2e04(...);
}

BadgeExplainWindow::~BadgeExplainWindow() {}

unsigned int BadgeExplainWindow::VF06()
{
    unsigned int uVar1;
    
    uVar1 = this->InOutWindow::VF06();
    FUN_005d6bfc(&this->unk_0x2d8);
    FUN_005e2e04(&this->unk_0x214);
    return uVar1;
}

void BadgeExplainWindow::VF10() {}

