#ifndef ACNLWA_IMGDB_DATETIMESECONDS_H
#define ACNLWA_IMGDB_DATETIMESECONDS_H

#include "types.h"

namespace imgdb {

class DateTimeSeconds {
public:
    void Initialize();
    bool IsInvalid() const;
	
	private:
	long long unk_0x00;
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_DATETIMESECONDS_H
