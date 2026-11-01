#ifndef ACNLWA_ESC_ESCAPEBGM_SINGLETONDISPOSER__H
#define ACNLWA_ESC_ESCAPEBGM_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace esc {
namespace EscapeBgm {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace EscapeBgm
}  // namespace esc

#endif  // ACNLWA_ESC_ESCAPEBGM_SINGLETONDISPOSER__H
