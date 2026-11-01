#ifndef ACNLWA_NN_NEX_CONNECTIONORIENTEDSTREAM_H
#define ACNLWA_NN_NEX_CONNECTIONORIENTEDSTREAM_H

#include "acnlwa/nn/nex/Stream.h"

namespace nn {
namespace nex {

class ConnectionOrientedStream : public ::nn::nex::Stream {
public:
    virtual ~ConnectionOrientedStream();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10() = 0;
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16() = 0;
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
    virtual void VF23();
    virtual void VF24();
    virtual void VF25();
    virtual void VF26() = 0;
    virtual void VF27();
    virtual void VF28();
    virtual void VF29();
    virtual void VF30();
    virtual void VF31();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CONNECTIONORIENTEDSTREAM_H
