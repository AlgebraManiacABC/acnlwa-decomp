#ifndef ACNLWA_NN_CEC_CTR_MESSAGE_H
#define ACNLWA_NN_CEC_CTR_MESSAGE_H

namespace nn {
namespace cec {
namespace CTR {

class Message {
public:
    Message();
    void InitializeMessage();
	
    private:
    char unk_0x000[0x130];
    char unk_0x130;
    int unk_0x134;
    int unk_0x138;
    int unk_0x13c;
    int unk_0x140;
    int unk_0x144;
    int unk_0x148;
    int unk_0x14c;
    int unk_0x150;
    int unk_0x154;
    int unk_0x158;
    int unk_0x15c;
    int unk_0x160;
};

}  // namespace CTR
}  // namespace cec
}  // namespace nn

#endif  // ACNLWA_NN_CEC_CTR_MESSAGE_H
