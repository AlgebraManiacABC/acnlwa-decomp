#ifndef ACNLWA_SEAD_DIRECTRESOURCEFACTORY_H
#define ACNLWA_SEAD_DIRECTRESOURCEFACTORY_H

#include "acnlwa/sead/DirectResourceFactoryBase.h"

namespace sead {

template <typename T0>
class DirectResourceFactory : public ::sead::DirectResourceFactoryBase {
public:
    virtual ~DirectResourceFactory();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

template <typename T0>
DirectResourceFactory<T0>::~DirectResourceFactory() {}

template <typename T0>
void DirectResourceFactory<T0>::VF02() {}

template <typename T0>
void DirectResourceFactory<T0>::VF03() {}

template <typename T0>
void DirectResourceFactory<T0>::VF04() {}

template <typename T0>
void DirectResourceFactory<T0>::VF05() {}

template <typename T0>
void DirectResourceFactory<T0>::VF06() {}

template <typename T0>
void DirectResourceFactory<T0>::VF07() {}


}  // namespace sead

#endif  // ACNLWA_SEAD_DIRECTRESOURCEFACTORY_H
