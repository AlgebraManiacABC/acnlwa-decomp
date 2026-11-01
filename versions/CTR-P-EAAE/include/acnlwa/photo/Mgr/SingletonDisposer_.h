#ifndef ACNLWA_PHOTO_MGR_SINGLETONDISPOSER__H
#define ACNLWA_PHOTO_MGR_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace photo {
namespace Mgr {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace Mgr
}  // namespace photo

#endif  // ACNLWA_PHOTO_MGR_SINGLETONDISPOSER__H
