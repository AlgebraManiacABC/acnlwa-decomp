#ifndef ACNLWA_SEAD_DELEGATEBASE_H
#define ACNLWA_SEAD_DELEGATEBASE_H

namespace sead {

template <typename T0, typename T1, typename T2>
class DelegateBase : public T2 {
public:
    virtual void VF00() = 0;
    virtual void VF01();
};

template <typename T0, typename T1, typename T2>
void DelegateBase<T0, T1, T2>::VF01() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_DELEGATEBASE_H
