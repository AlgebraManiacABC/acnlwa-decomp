#ifndef ACNLWA_NN_PIA_LOCAL_LOCALNETWORKFACTORY_H
#define ACNLWA_NN_PIA_LOCAL_LOCALNETWORKFACTORY_H

#include "acnlwa/nn/pia/transport/NetworkFactory.h"

namespace nn {
namespace pia {
namespace local {

class LocalNetworkFactory : public ::nn::pia::transport::NetworkFactory {
public:
    virtual ~LocalNetworkFactory();
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
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
    virtual void VF23();
    virtual void VF24();
    virtual void VF25();
    virtual void VF26();
    virtual void VF27();
    virtual void VF28();
    virtual void VF29();
    virtual void VF30();
    virtual void VF31();
    virtual void VF32();
    virtual void VF33();
    virtual void VF34();
    virtual void VF35();
    virtual void VF36() = 0;
    virtual void VF37() = 0;
    virtual void VF38();
    virtual void VF39();
    virtual void VF40();
    virtual void VF41();
    virtual void VF42() = 0;
    virtual void VF43();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALNETWORKFACTORY_H
