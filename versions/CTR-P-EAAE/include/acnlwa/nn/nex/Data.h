#ifndef ACNLWA_NN_NEX_DATA_H
#define ACNLWA_NN_NEX_DATA_H

#include "acnlwa/nn/nex/_DDL_Data.h"

namespace nn {
namespace nex {

class Data : public ::nn::nex::_DDL_Data {
public:
    virtual ~Data();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_DATA_H
