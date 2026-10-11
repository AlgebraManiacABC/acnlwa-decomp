#include "acnlwa/nn/nex/SecureStream.h"
#include "types.h"

extern "C" {
int FUN_00354c34(...);
int FUN_003551f4(...);
int FUN_00355244(...);
int FUN_00355f34(...);
int thunk_FUN_003619b0_00354bc4(...);
}

namespace nn {
namespace nex {

SecureStream::~SecureStream() {}

void SecureStream::VF02() {}

void SecureStream::VF03() {}

void SecureStream::VF07() {}

void SecureStream::VF08() {}

void SecureStream::VF09() {}

void SecureStream::VF10() {}

void SecureStream::VF11() {}

void SecureStream::VF12() {}

void SecureStream::VF13() {}

void SecureStream::VF14() {}

void SecureStream::VF15() {}

void SecureStream::VF16() {}

void SecureStream::VF17() {}

void SecureStream::VF18() {}

void SecureStream::VF23() {}

void SecureStream::VF26() {}

void SecureStream::VF32() {}

void SecureStream::VF33() {}

void SecureStream::VF34() {}

void SecureStream::VF35() {}

// was FUN_00360648
unsigned int SecureStream::VF36(unsigned int param_2, unsigned int param_3)
{
  undefined4 param_1 = (undefined4)this;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_003619b0_00354bc4(0x68);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00355f34();
  }
  FUN_00354c34(uVar2,2);
  FUN_00355244(uVar2,param_2);
  FUN_003551f4(uVar2,param_3);
  return uVar2;
}

void SecureStream::VF37() {}

void SecureStream::VF38() {}

void SecureStream::VF39() {}

}  // namespace nex
}  // namespace nn
