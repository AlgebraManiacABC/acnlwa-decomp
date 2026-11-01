#ifndef ACNLWA_EXPLAINBOOKCONTENT_H
#define ACNLWA_EXPLAINBOOKCONTENT_H

#include "acnlwa/state/Mode.h"

class ExplainBookContent : public ::state::Mode< ::ExplainBookContent> {
public:
    virtual ~ExplainBookContent();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_EXPLAINBOOKCONTENT_H
