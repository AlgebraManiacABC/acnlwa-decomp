#include "../../../include/types.h"

void FUN_00567224(void)

{
  if (cRam00975c31 < '\x01') {
    uRam00975c44 = 0;
    if (((piRam00975c3c != NULL) && (iRam00ae55cc != 0)) && (cRam00975c30 == '\0')) {
      cRam00975c30 = 1;
      (**(code **)(*piRam00975c3c + 0xc))(piRam00975c3c,0x6c6f6164,0);
      return;
    }
  }
  return;
}
