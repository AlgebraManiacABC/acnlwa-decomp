#define NUM_ITEMS 0x172B

int Item_GetID(unsigned short * item) {
    int item_id;
    if ((*item & ~0x8000) - (unsigned int)0x2000 < NUM_ITEMS) {
        item_id = (*item & ~0x8000) - 0x2000;
    } else {
        item_id = -1;
    }
    return item_id;
}
