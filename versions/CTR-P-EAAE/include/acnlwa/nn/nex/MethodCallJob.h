#ifndef ACNLWA_NN_NEX_METHODCALLJOB_H
#define ACNLWA_NN_NEX_METHODCALLJOB_H

namespace nn {
namespace nex {

template <typename T0, typename T1, typename T2>
class MethodCallJob : public T2 {
public:
    virtual ~MethodCallJob();
    virtual void VF03();
    virtual void VF06();
};

template <typename T0, typename T1, typename T2>
MethodCallJob<T0, T1, T2>::~MethodCallJob() {}

template <typename T0, typename T1, typename T2>
void MethodCallJob<T0, T1, T2>::VF03() {}

template <typename T0, typename T1, typename T2>
void MethodCallJob<T0, T1, T2>::VF06() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_METHODCALLJOB_H
