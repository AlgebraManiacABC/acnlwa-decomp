#ifndef ACNLWA_NN_NEX_DATASTOREFILESERVERCLIENT_H
#define ACNLWA_NN_NEX_DATASTOREFILESERVERCLIENT_H

#include "acnlwa/nn/nex/RootObject.h"
#include "acnlwa/nn/nex/NonCopyable.h"

namespace nn {
namespace nex {

class DataStoreFileServerClient : public ::nn::nex::RootObject, public ::nn::nex::NonCopyable {
public:
    virtual ~DataStoreFileServerClient();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_DATASTOREFILESERVERCLIENT_H
