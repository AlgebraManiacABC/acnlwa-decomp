#ifndef ACNLWA_SCRIPT_WORDNUMDIGIT_H
#define ACNLWA_SCRIPT_WORDNUMDIGIT_H

#include "acnlwa/script/WordFix.h"

namespace script {

class WordNumDigit : public ::script::WordFix<19u> {
public:
    virtual ~WordNumDigit();
    virtual void VF05();
    virtual void VF07();
    virtual void VF09();
    virtual void VF10();
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_WORDNUMDIGIT_H
