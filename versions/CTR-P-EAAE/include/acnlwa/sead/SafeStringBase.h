#ifndef ACNLWA_SEAD_SAFESTRINGBASE_H
#define ACNLWA_SEAD_SAFESTRINGBASE_H

namespace sead {

template <typename T0>
class SafeStringBase {
public:
    class iterator {
    public:
        virtual ~iterator();
    };

    class token_iterator : public iterator {
    public:
        virtual ~token_iterator();
    };

    virtual ~SafeStringBase();
    virtual void VF02();
};

template <typename T0>
SafeStringBase<T0>::iterator::~iterator() {}

template <typename T0>
SafeStringBase<T0>::token_iterator::~token_iterator() {}

template <typename T0>
SafeStringBase<T0>::~SafeStringBase() {}

template <typename T0>
void SafeStringBase<T0>::VF02() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_SAFESTRINGBASE_H
