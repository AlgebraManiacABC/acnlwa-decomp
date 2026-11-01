#ifndef ACNLWA_SSYS_MA_FLUSHCACHE_SINGLETONDISPOSER__H
#define ACNLWA_SSYS_MA_FLUSHCACHE_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace ssys {
namespace ma {
namespace FlushCache {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace FlushCache
}  // namespace ma
}  // namespace ssys

#endif  // ACNLWA_SSYS_MA_FLUSHCACHE_SINGLETONDISPOSER__H
