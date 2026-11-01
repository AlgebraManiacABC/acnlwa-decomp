#ifndef ACNLWA_SYS_TEXTMANAGER_H
#define ACNLWA_SYS_TEXTMANAGER_H

namespace sys {

class TextManager {
public:
    class CellPhoneInput {
    public:
        virtual ~CellPhoneInput();
    };

    virtual ~TextManager();
};

}  // namespace sys

#endif  // ACNLWA_SYS_TEXTMANAGER_H
