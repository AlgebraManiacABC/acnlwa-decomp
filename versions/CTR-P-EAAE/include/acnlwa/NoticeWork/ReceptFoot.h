#ifndef ACNLWA_NOTICEWORK_RECEPTFOOT_H
#define ACNLWA_NOTICEWORK_RECEPTFOOT_H

#include "acnlwa/script/IUiRecept.h"

namespace NoticeWork {

class ReceptFoot : public ::script::IUiRecept {
public:
    virtual ~ReceptFoot();
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
};

}  // namespace NoticeWork

#endif  // ACNLWA_NOTICEWORK_RECEPTFOOT_H
