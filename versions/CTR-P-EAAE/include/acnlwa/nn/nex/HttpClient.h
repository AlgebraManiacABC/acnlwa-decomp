#ifndef ACNLWA_NN_NEX_HTTPCLIENT_H
#define ACNLWA_NN_NEX_HTTPCLIENT_H

#include "acnlwa/nn/nex/RootObject.h"
#include "acnlwa/nn/nex/NonCopyable.h"

namespace nn {
namespace nex {

class HttpClient : public ::nn::nex::RootObject, public ::nn::nex::NonCopyable {
public:
    virtual ~HttpClient();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_HTTPCLIENT_H
