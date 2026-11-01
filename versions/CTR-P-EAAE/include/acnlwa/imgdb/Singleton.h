#ifndef ACNLWA_IMGDB_SINGLETON_H
#define ACNLWA_IMGDB_SINGLETON_H

namespace imgdb {

template <typename T0>
class Singleton {
public:
    virtual ~Singleton();
};

template <typename T0>
Singleton<T0>::~Singleton() {}


}  // namespace imgdb

#endif  // ACNLWA_IMGDB_SINGLETON_H
