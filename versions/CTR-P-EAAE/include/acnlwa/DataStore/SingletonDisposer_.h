#ifndef ACNLWA_DATASTORE_SINGLETONDISPOSER__H
#define ACNLWA_DATASTORE_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace DataStore {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace DataStore

#endif  // ACNLWA_DATASTORE_SINGLETONDISPOSER__H
