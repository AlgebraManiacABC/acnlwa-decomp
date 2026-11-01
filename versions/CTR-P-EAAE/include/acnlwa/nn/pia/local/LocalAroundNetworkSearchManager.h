#ifndef ACNLWA_NN_PIA_LOCAL_LOCALAROUNDNETWORKSEARCHMANAGER_H
#define ACNLWA_NN_PIA_LOCAL_LOCALAROUNDNETWORKSEARCHMANAGER_H

#include "acnlwa/nn/pia/common/RootObject.h"
#include "acnlwa/nn/pia/local/LocalMessage.h"

namespace nn {
namespace pia {
namespace local {

class LocalAroundNetworkSearchManager : public ::nn::pia::common::RootObject {
public:
    class LocalAroundNetworkSearchCommandAckMessage : public ::nn::pia::local::LocalMessage {
    public:
        virtual ~LocalAroundNetworkSearchCommandAckMessage();
        virtual void VF02();
        virtual void VF03();
    };

    class LocalAroundNetworkSearchCommandMessage : public ::nn::pia::local::LocalMessage {
    public:
        virtual ~LocalAroundNetworkSearchCommandMessage();
        virtual void VF02();
        virtual void VF03();
    };

    class LocalAroundNetworkStatusAckMessage : public ::nn::pia::local::LocalMessage {
    public:
        virtual ~LocalAroundNetworkStatusAckMessage();
        virtual void VF02();
        virtual void VF03();
    };

    class LocalAroundNetworkStatusMessage : public ::nn::pia::local::LocalMessage {
    public:
        virtual ~LocalAroundNetworkStatusMessage();
        virtual void VF02();
        virtual void VF03();
    };

    virtual ~LocalAroundNetworkSearchManager();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALAROUNDNETWORKSEARCHMANAGER_H
