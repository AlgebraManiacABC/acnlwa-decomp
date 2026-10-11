#include "acnlwa/BsMenuBestFriendList.h"
#include "types.h"

extern "C" {
int FUN_001323bc(...);
int FUN_00569e6c(...);
}

BsMenuBestFriendList::~BsMenuBestFriendList() {}

unsigned int BsMenuBestFriendList::Process_VF03() {}

unsigned int BsMenuBestFriendList::Process_VF06() {}

unsigned int BsMenuBestFriendList::Process_VF09() {}

// was FUN_003124e4
unsigned int BsMenuBestFriendList::Process_VF12()
{
  int param_1 = (int)this;
  undefined4 uVar1;
  
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 0x294,1);
  uVar1 = FUN_001323bc();
  FUN_00569e6c(uVar1,param_1 + 0x4d0,1);
  return 2;
}

