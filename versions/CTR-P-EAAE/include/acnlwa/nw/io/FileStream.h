#ifndef ACNLWA_NW_IO_FILESTREAM_H
#define ACNLWA_NW_IO_FILESTREAM_H

#include "acnlwa/nw/io/IOStream.h"

namespace nw {
namespace io {

class FileStream : public ::nw::io::IOStream {
public:
    virtual ~FileStream();
};

}  // namespace io
}  // namespace nw

#endif  // ACNLWA_NW_IO_FILESTREAM_H
