#include "acnlwa/nn/cec/CTR/Message.h"
#include "types.h"

namespace nn {
namespace cec {
namespace CTR {

Message::Message()
{
    unk_0x130 = 0;
    unk_0x138 = 0;
    unk_0x144 = 0;
    unk_0x148 = 0;
    unk_0x14c = 0;
    unk_0x150 = 0;
    unk_0x154 = 0;
    unk_0x158 = 0;
    unk_0x15c = 0;
    unk_0x160 = 0;
    unk_0x13c = 0;
    unk_0x140 = 0;
    InitializeMessage();
}

}  // namespace CTR
}  // namespace cec
}  // namespace nn
