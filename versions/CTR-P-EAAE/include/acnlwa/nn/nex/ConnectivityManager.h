#ifndef ACNLWA_NN_NEX_CONNECTIVITYMANAGER_H
#define ACNLWA_NN_NEX_CONNECTIVITYMANAGER_H

#include "acnlwa/nn/nex/PseudoSingleton.h"

namespace nn {
namespace nex {

class ConnectivityManager : public ::nn::nex::PseudoSingleton {
public:
    virtual ~ConnectivityManager();
};

}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_CONNECTIVITYMANAGER_H
