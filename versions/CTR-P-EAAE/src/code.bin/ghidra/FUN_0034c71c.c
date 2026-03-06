/**
 * FUN_0034c71c.c
 * Source line: 449030
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0034c71c(cro_file *cro)

{
  int err;
  nnroStruct *nnro_info;
  
  nnro_info = NULL;
  err = CRO_nnroControlObject(cro,(uint *)&nnro_info,0);
  if ((-1 < err) && (nnro_info != NULL)) {
    nnro_info->code_start = cro->code_offset;
    nnro_info->code_end = cro->code_offset + cro->code_size;
    nnro_info->field0_0x0 = (int *)pnRam0097e034;
    nnro_info->field1_0x4 = 0;
    coproc_moveto_Data_Memory_Barrier(0);
    *(nnroStruct **)((int)pnRam0097e034 + 4) = nnro_info;
    pnRam0097e034 = nnro_info;
    return 0;
  }
  return -0x369ed3fb;
}
