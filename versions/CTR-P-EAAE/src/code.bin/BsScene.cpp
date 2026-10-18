#include "acnlwa/BsScene.h"
#include "types.h"

extern "C" {
int FUN_00529d78(...);
}

BsScene::~BsScene() {}

int BsScene::Process_VF02() {}

void BsScene::Process_VF04() {}

int BsScene::Process_VF05() {}

void BsScene::Process_VF07() {}

bool BsScene::Process_VF08() {}

void BsScene::Process_VF10() {}

// was FUN_00606dc0
int BsScene::Process_VF11()
{
  int iVar1;
  
  iVar1 = FUN_00529d78();
  return iVar1 != 0;
}

void BsScene::Process_VF13() {}

void BsScene::Base_VF15() {}

