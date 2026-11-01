#ifndef ACNLWA_SEAD_DIRECTRESOURCEFACTORYBASE_H
#define ACNLWA_SEAD_DIRECTRESOURCEFACTORYBASE_H

#include "acnlwa/sead/ResourceFactory.h"

namespace sead {

class DirectResourceFactoryBase : public ::sead::ResourceFactory {
public:
    virtual ~DirectResourceFactoryBase();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_DIRECTRESOURCEFACTORYBASE_H
