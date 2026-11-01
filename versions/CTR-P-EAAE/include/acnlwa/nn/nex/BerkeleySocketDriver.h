#ifndef ACNLWA_NN_NEX_BERKELEYSOCKETDRIVER_H
#define ACNLWA_NN_NEX_BERKELEYSOCKETDRIVER_H

#include "acnlwa/nn/nex/SocketDriver.h"

namespace nn {
namespace nex {

class BerkeleySocketDriver : public ::nn::nex::SocketDriver {
public:
    class BerkeleySocket : public ::nn::nex::SocketDriver::Socket {
    public:
        virtual void VF00();
        virtual void VF01();
        virtual void VF02();
        virtual void VF03();
        virtual void VF04();
        virtual void VF05();
        virtual void VF06();
        virtual void VF07();
        virtual void VF08();
        virtual void VF09();
        virtual void VF10();
        virtual ~BerkeleySocket();
        virtual void VF13();
    };

    virtual ~BerkeleySocketDriver();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_BERKELEYSOCKETDRIVER_H
