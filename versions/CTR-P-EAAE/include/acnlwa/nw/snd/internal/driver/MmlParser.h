#ifndef ACNLWA_NW_SND_INTERNAL_DRIVER_MMLPARSER_H
#define ACNLWA_NW_SND_INTERNAL_DRIVER_MMLPARSER_H

namespace nw {
namespace snd {
namespace internal {
namespace driver {

class MmlParser {
public:
    virtual ~MmlParser();
    virtual void VF02();
    virtual void VF03(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
};

}  // namespace driver
}  // namespace internal
}  // namespace snd
}  // namespace nw

#endif  // ACNLWA_NW_SND_INTERNAL_DRIVER_MMLPARSER_H
