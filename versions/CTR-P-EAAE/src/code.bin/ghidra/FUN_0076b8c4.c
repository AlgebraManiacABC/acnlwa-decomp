/**
 * FUN_0076b8c4.c
 * Source line: 1129008
 * Body lines: 14
 */
void FUN_0076b8c4(ItemID_2 *param_1,Item_t *param_2)

{
  ItemID_2 IVar1;
  ItemParam_t *pIVar2;
  
  pIVar2 = Item_GetParam(param_2);
  if ((((pIVar2 == NULL) || (0x9a < pIVar2->_xA)) || (pIVar2->_xA != 0x48)) &&
     ((param_2->raw_item_id & 0x7fff) != 0x9d)) {
    *param_1 = _DAT_0095bfdc;
    IVar1 = IRam0095bfde;
  }
  else {
    IVar1 = param_2->_x2;
    *param_1 = param_2->raw_item_id & 0x8000 | 0x33a7;
  }
  param_1[1] = IVar1;
  return;
}
