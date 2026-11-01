#ifndef ACNLWA_IMGDB_TWLNANDARCHIVEMOUNTER_H
#define ACNLWA_IMGDB_TWLNANDARCHIVEMOUNTER_H

#include "acnlwa/imgdb/Singleton.h"
#include "acnlwa/imgdb/ArchiveMounter.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace imgdb {

class TwlNandArchiveMounter : public ::imgdb::Singleton< ::imgdb::TwlNandArchiveMounter>, public ::imgdb::ArchiveMounter, private ::nn::util::ADLFireWall::NonCopyable< ::imgdb::TwlNandArchiveMounter> {
public:
    virtual ~TwlNandArchiveMounter();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_TWLNANDARCHIVEMOUNTER_H
