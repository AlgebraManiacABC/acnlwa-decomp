/**
 * Fg_GetParam.c
 * Source line: 395513
 * Body lines: 8
 */
#include "../../../include/types.h"

FgParam_t * Fg_GetParam(Fg_t *param_1)

{
  uint tmp;
  
  if (Fg_Param_Fg_bin_fileinfo != NULL) {
    tmp = Fg_GetID(param_1);
    if ((Fg_Param_Fg_bin_fileinfo->data != NULL) && (tmp < MAX_FG_ID)) {
      return (FgParam_t *)(Fg_Param_Fg_bin_fileinfo->data + tmp * 0x10);
    }
  }
  return NULL;
}
