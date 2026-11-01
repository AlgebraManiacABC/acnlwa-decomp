#ifndef ACNLWA_MINIGAME0_CSTMRECEPTOR_H
#define ACNLWA_MINIGAME0_CSTMRECEPTOR_H

#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/sead/IDisposer.h"

namespace minigame0 {

class CstmReceptor : public ::script::ITalkRecept, public ::sead::IDisposer {
public:
    virtual ~CstmReceptor();
};

}  // namespace minigame0

#endif  // ACNLWA_MINIGAME0_CSTMRECEPTOR_H
