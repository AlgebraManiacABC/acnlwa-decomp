#include "types.h"

extern "C" {
int FUN_0046168c(...);
}

namespace nn {
namespace snd {
namespace CTR {

enum AuxBusId {};
struct AuxBusData;

// was FUN_00461ff8
void GetAuxCallback(AuxBusId param_1, void (**param_2)(AuxBusData*, int, unsigned int), unsigned int *param_3)
{
  FUN_0046168c(0xaea624,param_1,param_2,param_3);
  return;
}

}  // namespace CTR
}  // namespace snd
}  // namespace nn
