#include "acnlwa/sead/Delegate1.h"
#include "acnlwa/script/Phrase.h"

namespace {

class TakumiImportPhrase : public sead::Delegate1<TakumiImportPhrase,script::Phrase*> {
public:
    virtual ~TakumiImportPhrase();
};

TakumiImportPhrase::~TakumiImportPhrase() {}

}  // namespace
