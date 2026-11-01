#include "acnlwa/BsNpcMgr.h"

namespace {

class KameyamaForeachFunction : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

void KameyamaForeachFunction::VF00() {}

}  // namespace
