#ifndef ACNLWA_NN_NEX_DATASTOREPOSTHTTPEVENTLISTENER_H
#define ACNLWA_NN_NEX_DATASTOREPOSTHTTPEVENTLISTENER_H

#include "acnlwa/nn/nex/HttpEventListener.h"
#include "acnlwa/nn/nex/NonCopyable.h"
#include "acnlwa/nn/nex/RootObject.h"

namespace nn {
namespace nex {

class DataStorePostHttpEventListener : public ::nn::nex::HttpEventListener, public ::nn::nex::NonCopyable, public ::nn::nex::RootObject {
public:
    virtual ~DataStorePostHttpEventListener();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_DATASTOREPOSTHTTPEVENTLISTENER_H
