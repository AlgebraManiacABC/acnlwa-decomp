#ifndef ACNLWA_NN_NEX_PRUDPSTREAM_H
#define ACNLWA_NN_NEX_PRUDPSTREAM_H

#include "acnlwa/nn/nex/ConnectionOrientedStream.h"

namespace nn {
namespace nex {

class PRUDPStream : public ::nn::nex::ConnectionOrientedStream {
public:
    virtual ~PRUDPStream();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
    virtual void VF22();
    virtual void VF23();
    virtual void VF26();
    virtual void VF28();
    virtual void VF29();
    virtual void VF30();
    virtual void VF31();
    virtual void VF32();
    virtual void VF33();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_PRUDPSTREAM_H
