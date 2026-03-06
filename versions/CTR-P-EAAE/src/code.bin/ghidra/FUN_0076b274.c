/**
 * FUN_0076b274.c
 * Source line: 1128684
 * Body lines: 6
 */
short FUN_0076b274(Item_t *param_1)

{
  ItemParam_t *pIVar1;
  
  pIVar1 = Item_GetParam(param_1);
  if (((pIVar1 != NULL) && (pIVar1->_xA < 0x9b)) && (pIVar1->_xA == 0x29)) {
    return (param_1->_x2 & 0x3fff) + 1;
  }
  return 0;
}
