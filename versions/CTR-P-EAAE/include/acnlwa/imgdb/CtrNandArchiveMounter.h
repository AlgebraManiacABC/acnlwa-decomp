#ifndef ACNLWA_IMGDB_CTRNANDARCHIVEMOUNTER_H
#define ACNLWA_IMGDB_CTRNANDARCHIVEMOUNTER_H

#include "acnlwa/imgdb/Singleton.h"
#include "acnlwa/imgdb/ArchiveMounter.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace imgdb {

class CtrNandArchiveMounter : public ::imgdb::Singleton< ::imgdb::CtrNandArchiveMounter>, public ::imgdb::ArchiveMounter, private ::nn::util::ADLFireWall::NonCopyable< ::imgdb::CtrNandArchiveMounter> {
public:
    virtual ~CtrNandArchiveMounter();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_CTRNANDARCHIVEMOUNTER_H
