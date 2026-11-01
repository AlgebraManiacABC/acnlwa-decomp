#include "acnlwa/sead/FontBase.h"

namespace {

class DummyFont : public ::sead::FontBase {
public:
    virtual ~DummyFont();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

DummyFont::~DummyFont() {}

void DummyFont::VF02() {}

void DummyFont::VF03() {}

void DummyFont::VF04() {}

void DummyFont::VF05() {}

void DummyFont::VF06() {}

void DummyFont::VF07() {}

void DummyFont::VF08() {}

void DummyFont::VF09() {}

}  // namespace
