#include "acnlwa/MapIcon.h"
#include "types.h"

extern "C" {
int FUN_00568c10(...);
int FUN_00569544(...);
}

MapIcon::~MapIcon() {}

// TODO: verify FUN_0060e190
void MapIcon::VF03()
{
  int param_1 = (int)this;
  if (*(char *)(param_1 + 0x26b) == '\x01') {
    FUN_00569544(param_1 + 0x270);
  }
  FUN_00568c10(param_1 + 0x108);
}

void MapIcon::VF04() {}

void MapIcon::VF05() {}

void MapIcon::VF06() {}

