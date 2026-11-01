#ifndef ACNLWA_BINGOMASSBASE_H
#define ACNLWA_BINGOMASSBASE_H

class BingoMassBase {
public:
    virtual ~BingoMassBase();
    virtual void VF02() = 0;
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
};

#endif  // ACNLWA_BINGOMASSBASE_H
