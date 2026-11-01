#ifndef ACNLWA_INSTCATALOG_H
#define ACNLWA_INSTCATALOG_H

#include "acnlwa/CatalogBase.h"

template <int T0>
class InstCatalog : public ::CatalogBase {
public:
    virtual ~InstCatalog();
};

template <int T0>
InstCatalog<T0>::~InstCatalog() {}


#endif  // ACNLWA_INSTCATALOG_H
