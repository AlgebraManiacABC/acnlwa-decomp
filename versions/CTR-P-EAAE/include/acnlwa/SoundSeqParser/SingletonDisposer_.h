#ifndef ACNLWA_SOUNDSEQPARSER_SINGLETONDISPOSER__H
#define ACNLWA_SOUNDSEQPARSER_SINGLETONDISPOSER__H

#include "acnlwa/sead/IDisposer.h"

namespace SoundSeqParser {

class SingletonDisposer_ : public ::sead::IDisposer {
public:
    virtual ~SingletonDisposer_();
};

}  // namespace SoundSeqParser

#endif  // ACNLWA_SOUNDSEQPARSER_SINGLETONDISPOSER__H
