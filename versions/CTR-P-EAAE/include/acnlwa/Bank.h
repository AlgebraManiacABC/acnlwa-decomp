#ifndef ACNLWA_BANK_H
#define ACNLWA_BANK_H

template <unsigned int T0, unsigned int T1, bool T2, typename T3>
class Bank {
public:
    virtual ~Bank();
    virtual void Bank_VF02();
};

template <unsigned int T0, unsigned int T1, bool T2, typename T3>
Bank<T0, T1, T2, T3>::~Bank() {}

template <unsigned int T0, unsigned int T1, bool T2, typename T3>
void Bank<T0, T1, T2, T3>::Bank_VF02() {}


#endif  // ACNLWA_BANK_H
