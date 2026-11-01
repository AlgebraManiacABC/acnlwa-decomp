#ifndef ACNLWA_NW_SND_INTERNAL_FSFILESTREAM_H
#define ACNLWA_NW_SND_INTERNAL_FSFILESTREAM_H

#include "acnlwa/nw/io/FileStream.h"

namespace nw {
namespace snd {
namespace internal {

class FsFileStream : public ::nw::io::FileStream {
public:
    virtual void VF00();
    virtual ~FsFileStream();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
    virtual void VF21();
};

}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_FSFILESTREAM_H
