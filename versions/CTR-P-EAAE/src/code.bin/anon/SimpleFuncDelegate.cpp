#include "acnlwa/sead/IDelegate1.h"
#include "acnlwa/script/Phrase.h"

namespace {

class SimpleFuncDelegate : public sead::IDelegate1<script::Phrase*> {
public:
    virtual void VF00();
    virtual void VF01();
};

void SimpleFuncDelegate::VF00() {}

void SimpleFuncDelegate::VF01() {}

}  // namespace
