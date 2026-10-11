#include "acnlwa/NpcDemoDollTalkRecept.h"
#include "types.h"

NpcDemoDollTalkRecept::~NpcDemoDollTalkRecept() {}

void NpcDemoDollTalkRecept::ITalkRecept_VF12() {}

void NpcDemoDollTalkRecept::ITalkRecept_VF13() {}

void NpcDemoDollTalkRecept::ITalkRecept_VF17() {}

void NpcDemoDollTalkRecept::ITalkRecept_VF34() {}

unsigned int NpcDemoDollTalkRecept::VF70() {}

unsigned int NpcDemoDollTalkRecept::VF78() {}

// was FUN_00328a30
void NpcDemoDollTalkRecept::VF80(unsigned int param_2)
{
  int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x264) = param_2;
  return;
}

// was FUN_003293dc
void NpcDemoDollTalkRecept::VF81()
{}

// was FUN_003293d4
unsigned int NpcDemoDollTalkRecept::VF82()
{
  return 1;
}

// was FUN_00329394
unsigned int NpcDemoDollTalkRecept::VF83()
{
  return 1;
}

// was FUN_00328aa0
void NpcDemoDollTalkRecept::VF84()
{}

void NpcDemoDollTalkRecept::VF85() {}

// was FUN_00328c4c
unsigned int NpcDemoDollTalkRecept::VF86()
{
  return 2;
}

