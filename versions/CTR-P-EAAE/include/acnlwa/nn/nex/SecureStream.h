#ifndef ACNLWA_NN_NEX_SECURESTREAM_H
#define ACNLWA_NN_NEX_SECURESTREAM_H

#include "acnlwa/nn/nex/ConnectionOrientedStream.h"

namespace nn {
namespace nex {

class SecureStream : public ::nn::nex::ConnectionOrientedStream {
public:
    virtual ~SecureStream();
    virtual void VF02();
    virtual void VF03();
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
    virtual void VF23();
    virtual void VF26();
    virtual void VF32();
    virtual void VF33();
    virtual void VF34();
    virtual void VF35();
    virtual unsigned int VF36(unsigned int, unsigned int);
    virtual void VF37();
    virtual void VF38();
    virtual void VF39();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SECURESTREAM_H
