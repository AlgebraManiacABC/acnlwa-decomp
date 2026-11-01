#ifndef ACNLWA_PEAD_SAFESTRINGBASE_H
#define ACNLWA_PEAD_SAFESTRINGBASE_H

namespace pead {

template <typename T0>
class SafeStringBase {
public:
    class iterator {
    public:
        virtual ~iterator();
    };

    virtual ~SafeStringBase();
    virtual void VF02();
};

template <typename T0>
SafeStringBase<T0>::iterator::~iterator() {}

template <typename T0>
SafeStringBase<T0>::~SafeStringBase() {}

template <typename T0>
void SafeStringBase<T0>::VF02() {}


}  // namespace pead

#endif  // ACNLWA_PEAD_SAFESTRINGBASE_H
