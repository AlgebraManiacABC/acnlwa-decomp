#ifndef ACNLWA_ESC_PARAMLOADER_H
#define ACNLWA_ESC_PARAMLOADER_H

#include "acnlwa/ssys/ma/LoadSplit.h"

namespace esc {

class ParamLoader : public ::ssys::ma::LoadSplit {
public:
    virtual ~ParamLoader();
};

}  // namespace esc

#endif  // ACNLWA_ESC_PARAMLOADER_H
