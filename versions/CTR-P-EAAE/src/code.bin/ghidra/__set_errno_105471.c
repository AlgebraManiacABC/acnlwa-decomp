#include "../../../include/types.h"

void __set_errno(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__rt_errno_addr();
  *puVar1 = param_1;
  return;
}
