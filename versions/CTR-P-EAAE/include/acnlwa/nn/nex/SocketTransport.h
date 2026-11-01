#ifndef ACNLWA_NN_NEX_SOCKETTRANSPORT_H
#define ACNLWA_NN_NEX_SOCKETTRANSPORT_H

#include "acnlwa/nn/nex/RootTransport.h"
#include "acnlwa/nn/nex/Job.h"

namespace nn {
namespace nex {

class SocketTransport : public ::nn::nex::RootTransport {
public:
    class TransportJob : public ::nn::nex::Job {
    public:
        virtual ~TransportJob();
        virtual void VF03();
    };

    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual unsigned int VF09(unsigned int, unsigned int, unsigned int);
    virtual void VF10();
    virtual ~SocketTransport();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_SOCKETTRANSPORT_H
