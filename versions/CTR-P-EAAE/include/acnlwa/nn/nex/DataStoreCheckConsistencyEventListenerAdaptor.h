#ifndef ACNLWA_NN_NEX_DATASTORECHECKCONSISTENCYEVENTLISTENERADAPTOR_H
#define ACNLWA_NN_NEX_DATASTORECHECKCONSISTENCYEVENTLISTENERADAPTOR_H

#include "acnlwa/nn/nex/DataStoreGetObjectEventListenerTemplate.h"
#include "acnlwa/nn/nex/RootObject.h"
#include "acnlwa/nn/nex/NonCopyable.h"

namespace nn {
namespace nex {

template <typename T0>
class DataStoreCheckConsistencyEventListenerAdaptor : public ::nn::nex::DataStoreGetObjectEventListenerTemplate<unsigned int>, public ::nn::nex::RootObject, public ::nn::nex::NonCopyable {
public:
    virtual ~DataStoreCheckConsistencyEventListenerAdaptor();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

template <typename T0>
DataStoreCheckConsistencyEventListenerAdaptor<T0>::~DataStoreCheckConsistencyEventListenerAdaptor() {}

template <typename T0>
void DataStoreCheckConsistencyEventListenerAdaptor<T0>::VF02() {}

template <typename T0>
void DataStoreCheckConsistencyEventListenerAdaptor<T0>::VF03() {}

template <typename T0>
void DataStoreCheckConsistencyEventListenerAdaptor<T0>::VF04() {}


}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_DATASTORECHECKCONSISTENCYEVENTLISTENERADAPTOR_H
