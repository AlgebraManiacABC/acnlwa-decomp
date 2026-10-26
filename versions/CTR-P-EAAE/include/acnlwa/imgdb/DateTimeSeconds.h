#ifndef ACNLWA_IMGDB_DATETIMESECONDS_H
#define ACNLWA_IMGDB_DATETIMESECONDS_H

// Written by hand: this class has no RTTI, so it is not part of the
// generated scaffold. Only the members used so far are declared.

#include "types.h"

namespace imgdb {

class DateTimeSeconds {
public:
    void Initialize();
    bool IsInvalid() const;
	
	private:
	uint unk_0x00;
	uint unk_0x04;
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_DATETIMESECONDS_H
