#ifndef ACNLWA_NN_PIA_LOCAL_LOCALUPDATESESSIONMESSAGE_H
#define ACNLWA_NN_PIA_LOCAL_LOCALUPDATESESSIONMESSAGE_H

#include "acnlwa/nn/pia/local/LocalMessage.h"

namespace nn {
namespace pia {
namespace local {

class LocalUpdateSessionMessage : public ::nn::pia::local::LocalMessage {
public:
    virtual ~LocalUpdateSessionMessage();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace local
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_LOCAL_LOCALUPDATESESSIONMESSAGE_H
