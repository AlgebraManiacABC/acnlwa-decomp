#include "../../../include/astruct.h"

astruct * astruct_Init(astruct *new)

{
    new->field0_0x0 = NULL;
    new->data = NULL;
    new->field2_0x8 = 0;
    new->byte_0xc = 0;
    return new;
}
