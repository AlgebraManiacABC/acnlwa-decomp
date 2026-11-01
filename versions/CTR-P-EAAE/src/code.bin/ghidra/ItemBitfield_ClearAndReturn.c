ItemBitfield_t * ItemBitfield_ClearAndReturn(ItemBitfield_t *bitfield)

{
  ItemBitfield_Clear(bitfield);
  return bitfield;
}
