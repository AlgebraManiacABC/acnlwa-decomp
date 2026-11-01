#ifndef ACNLWA_BANKTABLE_H
#define ACNLWA_BANKTABLE_H

#include "acnlwa/BankTableBase.h"

template <typename T0, unsigned int T1>
class BankTable : public ::BankTableBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual ~BankTable();
};

template <typename T0, unsigned int T1>
void BankTable<T0, T1>::VF00() {}

template <typename T0, unsigned int T1>
void BankTable<T0, T1>::VF01() {}

template <typename T0, unsigned int T1>
void BankTable<T0, T1>::VF02() {}

template <typename T0, unsigned int T1>
void BankTable<T0, T1>::VF03() {}

template <typename T0, unsigned int T1>
void BankTable<T0, T1>::VF04() {}

template <typename T0, unsigned int T1>
void BankTable<T0, T1>::VF05() {}

template <typename T0, unsigned int T1>
BankTable<T0, T1>::~BankTable() {}


#endif  // ACNLWA_BANKTABLE_H
