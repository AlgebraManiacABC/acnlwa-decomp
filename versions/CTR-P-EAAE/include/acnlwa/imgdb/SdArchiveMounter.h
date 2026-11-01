#ifndef ACNLWA_IMGDB_SDARCHIVEMOUNTER_H
#define ACNLWA_IMGDB_SDARCHIVEMOUNTER_H

#include "acnlwa/imgdb/Singleton.h"
#include "acnlwa/imgdb/ArchiveMounter.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace imgdb {

class SdArchiveMounter : public ::imgdb::Singleton< ::imgdb::SdArchiveMounter>, public ::imgdb::ArchiveMounter, private ::nn::util::ADLFireWall::NonCopyable< ::imgdb::SdArchiveMounter> {
public:
    virtual ~SdArchiveMounter();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_SDARCHIVEMOUNTER_H
