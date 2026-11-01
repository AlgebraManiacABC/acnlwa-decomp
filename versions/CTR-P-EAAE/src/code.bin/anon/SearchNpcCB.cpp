#include "acnlwa/BsNpcMgr.h"

namespace {

class SearchNpcCB : public ::BsNpcMgr::NpcForeachFunction {
public:
    virtual void VF00();
};

void SearchNpcCB::VF00() {}

}  // namespace
