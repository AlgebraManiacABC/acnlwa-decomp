#ifndef ACNLWA_FRIENDLIST_SINGLETONDISPOSER__H
#define ACNLWA_FRIENDLIST_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace FriendList {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace FriendList

#endif  // ACNLWA_FRIENDLIST_SINGLETONDISPOSER__H
