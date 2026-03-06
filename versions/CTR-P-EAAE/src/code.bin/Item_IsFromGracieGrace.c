#include "../../include/item.h"

extern ItemParam_t * Item_GetParam(Item_t *);

uint Item_IsFromGracieGrace(Item_t *item)
{
    ItemParam_t *itemParam;
    ItemSource source;

    itemParam = Item_GetParam(item);
    if (
        (
            (itemParam != NULL) &&
            (source = itemParam->source, source < NUM_SOURCES)
        ) &&
        (
            (
                (source == 0x2e || source == GRACIEGRACE_SPRING ||
                    (
                        (
                            (source == GRACIEGRACE_SUMMER || source == GRACIEGRACE_FALL ||
                                (source == GRACIEGRACE_WINTER || source == GRACIEGRACE_SALE)
                            )
                        ) ||
                    (
                        source == GRACIEGRACE_SPRING_WALL ||
                        source == GRACIEGRACE_SUMMER_WALL
                    )
                )
            )
        ) ||
        (
            (
                source == GRACIEGRACE_FALL_WALL ||
                source == GRACIEGRACE_WINTER_WALL
            ) ||
            source == GRACIEGRACE_SALE_WALL
        )
       ))
    {
        return 1;
    }
    return 0;
}
