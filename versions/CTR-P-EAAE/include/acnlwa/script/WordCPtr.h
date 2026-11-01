#ifndef ACNLWA_SCRIPT_WORDCPTR_H
#define ACNLWA_SCRIPT_WORDCPTR_H

#include "acnlwa/script/IWord.h"

namespace script {

class WordCPtr : public ::script::IWord {
public:
    virtual ~WordCPtr();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_WORDCPTR_H
