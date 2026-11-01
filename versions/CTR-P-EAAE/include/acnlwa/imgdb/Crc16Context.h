#ifndef ACNLWA_IMGDB_CRC16CONTEXT_H
#define ACNLWA_IMGDB_CRC16CONTEXT_H

#include "acnlwa/nn/crypto/HashContextBase.h"

namespace imgdb {

class Crc16Context : public ::nn::crypto::HashContextBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual ~Crc16Context();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace imgdb

#endif  // ACNLWA_IMGDB_CRC16CONTEXT_H
