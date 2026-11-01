#ifndef ACNLWA_IMGDB_FILEREADER_H
#define ACNLWA_IMGDB_FILEREADER_H

#include "types.h"
#include "acnlwa/nn/util/ADLFireWall/NonCopyable.h"

namespace imgdb {

class FileReader : private ::nn::util::ADLFireWall::NonCopyable< ::imgdb::FileReader> {
public:
    virtual ~FileReader();
    virtual void VF02();
    virtual void VF03();

    long long GetFileSize() const;

	private:
	char unk_0x00[0x1c];
    long long unk_0x20;
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_FILEREADER_H
