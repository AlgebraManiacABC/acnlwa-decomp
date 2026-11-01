#ifndef ACNLWA_NN_NEX_DATASTOREPERMISSION_H
#define ACNLWA_NN_NEX_DATASTOREPERMISSION_H

#include "acnlwa/nn/nex/_DDL_DataStorePermission.h"

namespace nn {
namespace nex {

class DataStorePermission : public ::nn::nex::_DDL_DataStorePermission {
public:
    virtual ~DataStorePermission();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_DATASTOREPERMISSION_H
