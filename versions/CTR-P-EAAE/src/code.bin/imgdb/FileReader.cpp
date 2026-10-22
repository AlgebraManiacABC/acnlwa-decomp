#include "acnlwa/imgdb/FileReader.h"
#include "types.h"

namespace imgdb {

FileReader::~FileReader() {}

void FileReader::VF02() {}

void FileReader::VF03() {}

// was FUN_00753cbc
undefined8 FileReader::GetFileSize() const
{
  int param_1 = (int)this;
  return *(undefined8 *)(param_1 + 0x20);
}

}  // namespace imgdb
