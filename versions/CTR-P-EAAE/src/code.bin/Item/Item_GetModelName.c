extern int Item_GetID(unsigned short * item);

#define NUM_ITEMS 0x172B
#define DAT_0053608c 0x953238
#define DAT_00536090 0x871AC4

int Item_GetModelName(unsigned short * item)
{
    unsigned int item_id = Item_GetID(item);
    if (item_id == 0xffffffff || item_id >= NUM_ITEMS)
    {
        int * p = (int*)DAT_0053608c;
        return p[11];
    }
    else
    {
        int * p = (int*)DAT_00536090;
        return p[item_id];
    }
}
