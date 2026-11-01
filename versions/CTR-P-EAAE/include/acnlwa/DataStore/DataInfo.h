#ifndef ACNLWA_DATASTORE_DATAINFO_H
#define ACNLWA_DATASTORE_DATAINFO_H

#include "acnlwa/net/SearchDataResult.h"

namespace DataStore {

class DataInfo : public ::net::SearchDataResult {
public:
    virtual ~DataInfo();
    virtual void VF05();
};

}  // namespace DataStore

#endif  // ACNLWA_DATASTORE_DATAINFO_H
