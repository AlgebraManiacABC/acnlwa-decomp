#include "../../../include/villager.h"
#include "../../../include/astruct.h"

ConstPackEntry_t * Villager_GetConstPackEntry(astruct_5 *fileinfo,uint villager_id)

{
    byte *data;
    ConstPackEntry_t *villager_data;
    uint num_villagers;

    data = (fileinfo->file_struct).data;
    if (data != NULL) {
        num_villagers = NUM_VILLAGERS;
    }
    if (data != NULL && villager_id < num_villagers) {
        villager_data = (ConstPackEntry_t *)(data + villager_id * 0x22);
    }
    else {
        villager_data = NULL;
    }
    return villager_data;
}
