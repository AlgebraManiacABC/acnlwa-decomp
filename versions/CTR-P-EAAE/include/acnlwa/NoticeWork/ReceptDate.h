#ifndef ACNLWA_NOTICEWORK_RECEPTDATE_H
#define ACNLWA_NOTICEWORK_RECEPTDATE_H

#include "acnlwa/script/IUiRecept.h"

namespace NoticeWork {

class ReceptDate : public ::script::IUiRecept {
public:
    virtual ~ReceptDate();
    virtual void VF02();
};

}  // namespace NoticeWork

#endif  // ACNLWA_NOTICEWORK_RECEPTDATE_H
