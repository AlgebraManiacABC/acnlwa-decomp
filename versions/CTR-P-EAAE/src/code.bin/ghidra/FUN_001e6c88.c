/**
 * FUN_001e6c88.c
 * Source line: 249028
 * Body lines: 11
 */
void FUN_001e6c88(int param_1)

{
  int iVar1;
  
  iVar1 = GET_BYTE_00957322();
  if (iVar1 == param_1) {
    iRam00952108 += 1;
  }
  iVar1 = FUN_002f74e0(0x80,param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_006f9c08(param_1), iVar1 != 0)) {
    *(short *)(iVar1 + 0x18) = *(short *)(iVar1 + 0x18) + 1;
    return;
  }
  return;
}
