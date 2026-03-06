/**
 * ItemBitfield_Clear.c
 * Source line: 298825
 * Body lines: 2
 */
void ItemBitfield_Clear(ItemBitfield_t *bitfield)

{
  __rt_memclr_w(bitfield,0x2e8);
  return;
}
