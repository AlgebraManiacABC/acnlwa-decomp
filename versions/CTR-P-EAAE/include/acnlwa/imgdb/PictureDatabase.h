#ifndef ACNLWA_IMGDB_PICTUREDATABASE_H
#define ACNLWA_IMGDB_PICTUREDATABASE_H

namespace imgdb {

class PictureDatabase {
public:
    bool IsInitialized() const;
    int GetRecord(int param_2) const;
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_PICTUREDATABASE_H
