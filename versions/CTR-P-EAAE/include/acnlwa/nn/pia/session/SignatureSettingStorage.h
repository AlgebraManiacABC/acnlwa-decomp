#ifndef ACNLWA_NN_PIA_SESSION_SIGNATURESETTINGSTORAGE_H
#define ACNLWA_NN_PIA_SESSION_SIGNATURESETTINGSTORAGE_H

#include "acnlwa/nn/pia/common/RootObject.h"

namespace nn {
namespace pia {
namespace session {

class SignatureSettingStorage : public ::nn::pia::common::RootObject {
public:
    virtual ~SignatureSettingStorage();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_SIGNATURESETTINGSTORAGE_H
