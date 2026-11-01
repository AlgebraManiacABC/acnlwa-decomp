#ifndef ACNLWA_SCRIPT_WORDFIX_H
#define ACNLWA_SCRIPT_WORDFIX_H

#include "acnlwa/script/WordPtr.h"

namespace script {

template <unsigned int T0>
class WordFix : public ::script::WordPtr {
public:
    virtual ~WordFix();
    virtual void VF05();
    virtual void VF07();
    virtual void VF09();
    virtual void VF10();
};

template <unsigned int T0>
WordFix<T0>::~WordFix() {}

template <unsigned int T0>
void WordFix<T0>::VF05() {}

template <unsigned int T0>
void WordFix<T0>::VF07() {}

template <unsigned int T0>
void WordFix<T0>::VF09() {}

template <unsigned int T0>
void WordFix<T0>::VF10() {}


}  // namespace script

#endif  // ACNLWA_SCRIPT_WORDFIX_H
