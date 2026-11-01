#ifndef ACNLWA_NN_NEX_URLPROBELIST_H
#define ACNLWA_NN_NEX_URLPROBELIST_H

#include "acnlwa/nn/nex/qList.h"
#include "acnlwa/nn/nex/URLProbe.h"

namespace nn {
namespace nex {

class URLProbeList : public ::nn::nex::qList< ::nn::nex::URLProbe> {
public:
    virtual ~URLProbeList();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_URLPROBELIST_H
