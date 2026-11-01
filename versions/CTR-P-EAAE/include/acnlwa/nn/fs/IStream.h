#ifndef ACNLWA_NN_FS_ISTREAM_H
#define ACNLWA_NN_FS_ISTREAM_H

#include "acnlwa/nn/fs/IInputStream.h"
#include "acnlwa/nn/fs/IOutputStream.h"

namespace nn {
namespace fs {

class IStream : public ::nn::fs::IInputStream, public ::nn::fs::IOutputStream {
public:
};

}  // namespace fs
}  // namespace nn

#endif  // ACNLWA_NN_FS_ISTREAM_H
