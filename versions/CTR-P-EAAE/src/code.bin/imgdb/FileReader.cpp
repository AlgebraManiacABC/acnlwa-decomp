#include "acnlwa/imgdb/FileReader.h"
#include "types.h"

namespace imgdb {

FileReader::~FileReader() {}

void FileReader::VF02() {}

void FileReader::VF03() {}

long long FileReader::GetFileSize() const
{
	return unk_0x20;
}

}  // namespace imgdb
