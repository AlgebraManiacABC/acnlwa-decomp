#ifndef ACNLWA_NN_HTTP_CONNECTION_H
#define ACNLWA_NN_HTTP_CONNECTION_H

#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace nn {
namespace http {

class Connection : private ::nn::util::ADLFireWall::NonCopyable< ::nn::http::Connection> {
public:
    virtual ~Connection();
};

}  // namespace http
}  // namespace nn

#endif  // ACNLWA_NN_HTTP_CONNECTION_H
