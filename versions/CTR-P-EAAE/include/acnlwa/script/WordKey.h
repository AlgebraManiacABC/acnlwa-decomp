#ifndef ACNLWA_SCRIPT_WORDKEY_H
#define ACNLWA_SCRIPT_WORDKEY_H

#include "acnlwa/script/WordFix.h"

namespace script {

template <unsigned int T0, typename T1>
class WordKey : public ::script::WordFix<T0> {
public:
    virtual ~WordKey();
    virtual void VF05();
    virtual void VF07();
    virtual void VF09();
    virtual void VF10();
};

template <unsigned int T0, typename T1>
WordKey<T0, T1>::~WordKey() {}

template <unsigned int T0, typename T1>
void WordKey<T0, T1>::VF05() {}

template <unsigned int T0, typename T1>
void WordKey<T0, T1>::VF07() {}

template <unsigned int T0, typename T1>
void WordKey<T0, T1>::VF09() {}

template <unsigned int T0, typename T1>
void WordKey<T0, T1>::VF10() {}


}  // namespace script

#endif  // ACNLWA_SCRIPT_WORDKEY_H
