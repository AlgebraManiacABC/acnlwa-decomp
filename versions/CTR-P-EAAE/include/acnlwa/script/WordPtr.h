#ifndef ACNLWA_SCRIPT_WORDPTR_H
#define ACNLWA_SCRIPT_WORDPTR_H

#include "acnlwa/script/IWord.h"

namespace script {

class WordPtr : public ::script::IWord {
public:
    virtual ~WordPtr();
    virtual unsigned int VF02();
    virtual unsigned int VF03();
    virtual unsigned int VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_WORDPTR_H
