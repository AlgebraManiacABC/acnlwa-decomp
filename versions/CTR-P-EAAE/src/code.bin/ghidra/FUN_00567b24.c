/**
 * FUN_00567b24.c
 * Source line: 809546
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_00567b24(undefined4 *param_1)

{
  int iVar1;
  cro_container *cntnr;
  
  *param_1 = &UNK_0090614c;
  iVar1 = param_1[1];
  while (iVar1 != 0) {
    cntnr = (cro_container *)param_1[1];
    FUN_0013f000(param_1,cntnr);
    if (cntnr != NULL) {
      (**(code **)cntnr->field0_0x0)(cntnr);
      FUN_0013ad90(cntnr);
    }
    iVar1 = param_1[1];
  }
  return param_1;
}
