#include "acnlwa/imgdb/ImageSearcher.h"
#include "acnlwa/imgdb/ImageInfo.h"
#include "types.h"

namespace imgdb {

ImageSearcher::ImageSearcher()
    : unk_0x00(0), unk_0x04(2), unk_0x08(0), unk_0x0c(0)
{
    unk_0x10.Initialize();
}

}  // namespace imgdb
