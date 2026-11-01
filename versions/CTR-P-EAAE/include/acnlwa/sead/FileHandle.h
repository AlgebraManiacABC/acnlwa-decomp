#ifndef ACNLWA_SEAD_FILEHANDLE_H
#define ACNLWA_SEAD_FILEHANDLE_H

#include "acnlwa/sead/HandleBase.h"

namespace sead {

class FileHandle : public ::sead::HandleBase {
public:
    virtual ~FileHandle();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_FILEHANDLE_H
