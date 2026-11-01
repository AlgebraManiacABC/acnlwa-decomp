#ifndef ACNLWA_UTLBASE_H
#define ACNLWA_UTLBASE_H

template <typename T0>
class UtlBase : public T0 {
public:
    virtual ~UtlBase();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int UtlBase_VF30() = 0;
    virtual unsigned int UtlBase_VF31() = 0;
    virtual void UtlBase_VF32() = 0;
    virtual unsigned int UtlBase_VF33() = 0;
    virtual unsigned int UtlBase_VF34() = 0;
    virtual unsigned int UtlBase_VF35() = 0;
};

template <typename T0>
UtlBase<T0>::~UtlBase() {}

template <typename T0>
unsigned int UtlBase<T0>::Process_VF03() {}

template <typename T0>
unsigned int UtlBase<T0>::Process_VF06() {}


#endif  // ACNLWA_UTLBASE_H
