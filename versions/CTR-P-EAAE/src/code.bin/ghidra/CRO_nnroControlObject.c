/**
 * CRO_nnroControlObject.c
 * Source line: 152488
 * Body lines: 14
 */
#include "../../../include/types.h"

int CRO_nnroControlObject(cro_file *cro,uint *param_2,undefined4 param_3)

{
  uint nnroCO_seg;
  int err;
  code *nnroControlObject_;
  uint nnroCO_off;
  
  nnroCO_seg = (uint)cro->nnroControlObject_ & 0xf;
  nnroCO_off = (uint)cro->nnroControlObject_ >> 4;
  if ((((int)nnroCO_seg < (int)cro->seg_table_count) &&
      (nnroCO_off < cro->seg_table_offset[nnroCO_seg].size)) &&
     (nnroControlObject_ = (code *)(cro->seg_table_offset[nnroCO_seg].off + nnroCO_off),
     nnroControlObject_ != NULL)) {
          // WARNING: Could not recover jumptable at 0x0013ffe4. Too many branches
          // WARNING: Treating indirect jump as call
    err = (*nnroControlObject_)(param_2,param_3);
    return err;
  }
          // if (seg >= seg_count || (nnroCO placed after __?) || func == NULL)
  return -0x271ed3fc;
}
