#ifndef ACNLWA_NN_CEC_CTR_MESSAGEBOX_H
#define ACNLWA_NN_CEC_CTR_MESSAGEBOX_H

namespace nn {
namespace cec {
namespace CTR {

class MessageBox {
public:
    virtual ~MessageBox();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
};

}  // namespace CTR
}  // namespace cec
}  // namespace nn

#endif  // ACNLWA_NN_CEC_CTR_MESSAGEBOX_H
