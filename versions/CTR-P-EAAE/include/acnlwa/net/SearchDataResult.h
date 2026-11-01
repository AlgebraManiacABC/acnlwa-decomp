#ifndef ACNLWA_NET_SEARCHDATARESULT_H
#define ACNLWA_NET_SEARCHDATARESULT_H

namespace net {

class SearchDataResult {
public:
    virtual ~SearchDataResult();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

}  // namespace net

#endif  // ACNLWA_NET_SEARCHDATARESULT_H
