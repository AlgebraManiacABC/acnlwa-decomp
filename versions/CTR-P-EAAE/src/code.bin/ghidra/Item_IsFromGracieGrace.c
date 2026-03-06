/**
 * Item_IsFromGracieGrace.c
 * Source line: 1125926
 * Body lines: 14
 */
#include "../../../include/types.h"

uint Item_IsFromGracieGrace(Item_t *item)

{
  ItemParam_t *itemParam;
  ItemSource source;
  
  itemParam = Item_GetParam(item);
  if (((itemParam != NULL) && (source = itemParam->source, source < NumSources)) &&
     (((source == 0x2e || source == GracieGrace (Spring) ||
       (((source == GracieGrace (Summer) || source == GracieGrace (Fall) ||
         (source == GracieGrace (Winter) || source == GracieGrace (Sale))) ||
        (source == GracieGrace (Spring, Wall-mounted) ||
         source == GracieGrace (Summer, Wall-mounted))))) ||
      ((source == GracieGrace (Fall, Wall-mounted) || source == GracieGrace (Winter, Wall-mounted))
       || source == GracieGrace (Sale, Wall-mounted))))) {
    return 1;
  }
  return 0;
}
