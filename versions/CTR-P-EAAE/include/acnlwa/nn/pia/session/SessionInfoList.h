#ifndef ACNLWA_NN_PIA_SESSION_SESSIONINFOLIST_H
#define ACNLWA_NN_PIA_SESSION_SESSIONINFOLIST_H

#include "acnlwa/nn/pia/session/ISessionInfoList.h"

namespace nn {
namespace pia {
namespace session {

template <typename T0>
class SessionInfoList : public ::nn::pia::session::ISessionInfoList {
public:
    virtual ~SessionInfoList();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

template <typename T0>
SessionInfoList<T0>::~SessionInfoList() {}

template <typename T0>
void SessionInfoList<T0>::VF02() {}

template <typename T0>
void SessionInfoList<T0>::VF03() {}

template <typename T0>
void SessionInfoList<T0>::VF04() {}

template <typename T0>
void SessionInfoList<T0>::VF05() {}

template <typename T0>
void SessionInfoList<T0>::VF06() {}

template <typename T0>
void SessionInfoList<T0>::VF07() {}

template <typename T0>
void SessionInfoList<T0>::VF08() {}


}  // namespace session
}  // namespace pia
}  // namespace nn

#endif  // ACNLWA_NN_PIA_SESSION_SESSIONINFOLIST_H
