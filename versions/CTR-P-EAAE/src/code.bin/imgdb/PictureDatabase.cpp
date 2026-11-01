#include "acnlwa/imgdb/PictureDatabase.h"
#include "types.h"

namespace imgdb {

// TODO: verify FUN_00754978
bool PictureDatabase::IsInitialized() const
{
  int *param_1 = (int *)this;
  return *param_1 != 0;
}

// TODO: verify FUN_00754a3c
int PictureDatabase::GetRecord(int param_2) const
{
  int param_1 = (int)this;
  return *(int *)(param_1 + 0xc) + param_2 * 0xc;
}

}  // namespace imgdb
