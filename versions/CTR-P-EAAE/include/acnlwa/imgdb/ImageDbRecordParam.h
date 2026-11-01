#ifndef ACNLWA_IMGDB_IMAGEDBRECORDPARAM_H
#define ACNLWA_IMGDB_IMAGEDBRECORDPARAM_H

#include "acnlwa/imgdb/DateTimeSeconds.h"
#include "acnlwa/imgdb/Enums.h"

namespace imgdb {

class ImageDbRecordParam {
public:
    void Initialize();
    bool IsValidBodyId(BodyIdType param_2) const;

    private:
    DateTimeSeconds unk_0x00;
    char unk_0x08[0x5];
    char unk_0x0d;
    char unk_0x0e;
    char unk_0x0f;
    char unk_0x10[0x10];
    char unk_0x20;
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_IMAGEDBRECORDPARAM_H
