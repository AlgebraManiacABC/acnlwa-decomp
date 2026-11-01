#include "acnlwa/nn/fnd/IAllocator.h"

namespace {

class CecAllocator : public ::nn::fnd::IAllocator {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~CecAllocator();
};

void CecAllocator::VF00() {}

void CecAllocator::VF01() {}

CecAllocator::~CecAllocator() {}

}  // namespace
