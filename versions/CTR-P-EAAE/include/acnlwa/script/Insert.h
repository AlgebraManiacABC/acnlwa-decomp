#ifndef ACNLWA_SCRIPT_INSERT_H
#define ACNLWA_SCRIPT_INSERT_H

#include "types.h"

namespace script {

class HasVF07 {
    public:
    virtual ~HasVF07();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05(...);
    virtual void VF06();
    virtual void VF07();
    static inline void callVF05(HasVF07 * s, uint r1) { s->VF05(r1); }
    static inline void callVF07(HasVF07 * s) { s->VF07(); }
};

class SeventyC {
	public:
	char unk_0x00[0x7c];
};

class CeetyC {
	public:
	char unk_0x00[0xcc];
};

class NinetyFour {
	public:
	char unk_0x00[0x94];
};

class SeventyFour : public HasVF07 {
	public:
	virtual ~SeventyFour();
	char unk_0x04[0x70];
};

class SixtyFour : public HasVF07 {
	public:
	virtual ~SixtyFour();
	char unk_0x04[0x60];
};

class Sixty : public HasVF07 {
	public:
	virtual ~Sixty();
	char unk_0x04[0x5c];
};

class ThirtyFour : public HasVF07 {
	public:
	virtual ~ThirtyFour();
	char unk_0x04[0x30];
};

class Thirty : public HasVF07 {
	public:
	virtual ~Thirty();
	char unk_0x04[0x2c];
};

class TwentyC : public HasVF07 {
	public:
	virtual ~TwentyC();
	char unk_0x04[0x28];
};

class EfftyFour : public HasVF07 {
    public:
    virtual ~EfftyFour();
    char unk_0x04[0xf0];
};
    
class FortyFour : public HasVF07 {
    public:
    virtual ~FortyFour();
    char unk_0x04[0x3a];
    char unk_0x3e;
    uint unk_0x40;
};

class FiftyC : public HasVF07 {
    public:
    virtual ~FiftyC();
    char pad[0x58];
};

class Insert {
public:
    virtual void VF00() = 0;
    virtual void VF01() = 0;
    virtual void VF02();
    virtual void VF03(uint);
    virtual void VF04(uint);
    virtual void VF05(uint);
    virtual void VF06(uint);
    virtual void VF07(uint);
    virtual void VF08(uint);
    virtual void VF09();
    virtual void VF10(uint);
    virtual void VF11(uint);
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19(FortyFour *, uint);
    virtual void VF20();
    virtual void VF21(uint, uint);
    virtual void VF22();
    virtual void VF23();
    virtual void VF24();
    virtual void VF25();
    virtual void VF26();
    virtual void VF27(uint);
    virtual void VF28(uint);
    virtual void VF29(uint);
    virtual void VF30(uint);
    virtual void VF31(uint);
    virtual void VF32(uint, uint);
    virtual void VF33(uint, short, uint);
    virtual void VF34(uint, uint);
    virtual void VF35(uint, uint);
    virtual void VF36(uint, uint);
    virtual void VF37(uint, uint);
    virtual void VF38(uint, uint);
    virtual void VF39(uint);
    virtual void VF40(uint, uint);
    virtual void VF41();
    virtual void VF42(uint);
    virtual void VF43(uint, uint);
    virtual void VF44(uint, uint);
    virtual void VF45(uint, uint);
    virtual void VF46(uint, uint);
    virtual void VF47(uint, uint);
    virtual void VF48(uint);
    virtual void VF49() = 0;
    virtual void VF50() = 0;
    virtual void VF51() = 0;
    virtual void VF52() = 0;
    virtual void VF53() = 0;
    virtual void VF54() = 0;
    virtual void VF55();
    virtual void VF56();
    virtual void VF57();
    virtual void VF58();
    virtual void VF59(uint);
    virtual void VF60(uint);
    virtual void VF61();
    virtual void VF62();
    virtual void VF63();
    virtual void VF64();
    virtual void VF65() = 0;
    virtual void VF66();
    virtual void VF67();
    virtual void VF68();
    virtual void VF69();
    virtual void VF70();
    virtual void VF71();
    virtual void VF72();
    virtual void VF73() = 0;
    virtual void VF74();
    virtual void VF75();
    virtual void VF76();
    virtual void VF77();
    virtual void VF78();
    virtual void VF79();
    virtual void VF80();
    virtual void VF81();
    virtual void VF82();
    virtual void VF83();
    virtual void VF84();
    virtual void VF85() = 0;
    virtual void VF86() = 0;
    virtual void VF87();
    virtual void VF88();
    virtual void VF89();
    virtual void VF90();
    virtual void VF91();
    virtual void VF92();
    virtual void VF93() = 0;
    virtual void VF94();
    virtual void VF95();
    virtual void VF96();
    virtual void VF97();
    virtual void VF98();
    virtual void VF99();
    virtual void VF100();
    virtual void VF101();
    virtual void VF102() {}
    virtual void VF103();
    virtual void VF104();
    virtual void VF105();
    virtual void VF106();
    virtual void VF107();
    virtual void VF108();
    virtual void VF109();
    virtual void VF110();
    virtual void VF111();
    virtual void VF112();
    virtual void VF113();
    virtual void VF114();
    virtual void VF115();
    virtual void VF116();
    virtual void VF117();
    virtual void VF118() {}
    virtual void VF119() = 0;
    virtual void VF120() = 0;
    virtual void VF121() = 0;
    virtual void VF122() = 0;
    virtual void VF123() = 0;
    virtual void VF124() = 0;
    virtual FortyFour * VF125(uint);
    virtual FortyFour * VF126(uint);
    virtual FiftyC * VF127(uint);
    virtual FiftyC * VF128(uint);
    virtual FortyFour * VF129(uint);
    virtual FortyFour * VF130(uint);
    virtual HasVF07 * VF131();
    virtual FortyFour * VF132(uint);
    virtual FortyFour * VF133(uint);
    virtual HasVF07 * VF134();
    virtual void VF135() = 0;
    virtual void * VF136();
    virtual void * VF137();
    virtual ThirtyFour * VF138(uint r1);
    virtual HasVF07 * VF139();
    virtual HasVF07 * VF140();
    virtual HasVF07 * VF141();
    virtual HasVF07 * VF142();
    virtual void VF143() = 0;
    virtual Sixty * VF144(uint);
    virtual HasVF07 * VF145();
    virtual HasVF07 * VF146();
    virtual FiftyC * VF147(uint);
    virtual FiftyC * VF148(uint);
    virtual FiftyC * VF149(uint);
    virtual FiftyC * VF150(uint);
    virtual NinetyFour * VF151(uint);
    virtual FiftyC * VF152(uint);
    virtual FiftyC * VF153(uint);
    virtual FiftyC * VF154(uint);
    virtual void VF155() = 0;
    virtual void VF156() = 0;
    virtual HasVF07 * VF157();
    virtual HasVF07 * VF158();
    virtual SeventyFour * VF159(uint);
    virtual TwentyC * VF160(uint);
    virtual TwentyC * VF161(uint);
    virtual CeetyC * VF162(uint);
    virtual void VF163() = 0;
    virtual SeventyFour * VF164(uint);
    virtual SeventyC * VF165(uint);
    virtual ThirtyFour * VF166(uint);
    virtual HasVF07 * VF167();
    virtual HasVF07 * VF168();
    virtual HasVF07 * VF169();
    virtual EfftyFour * VF170(uint);
    virtual void VF171();
    virtual void VF172();
    virtual TwentyC * VF173(uint);
    virtual TwentyC * VF174(uint);
    virtual TwentyC * VF175(uint);
    virtual FiftyC * VF176(uint);
    virtual Sixty * VF177(uint);
    virtual HasVF07 * VF178();
    virtual SixtyFour * VF179(uint);
    virtual void * VF180();
    virtual HasVF07 * VF181();
    virtual FiftyC * VF182(uint);
    virtual Thirty * VF183(uint);
    virtual SeventyFour * VF184(uint);
    virtual SeventyFour * VF185(uint);
    virtual SeventyFour * VF186(uint);
    virtual HasVF07 * VF187();
    virtual void VF188();
    virtual void VF189() = 0;
    virtual void VF190() = 0;
    virtual uint VF191() { return 0; }

    private:
    char unk_0x0004[0x4];
    FortyFour unk_0x0008[0x10];
    FortyFour unk_0x0448[0xa];
    FiftyC unk_0x06f0[0xa];
    FiftyC unk_0x0a88[0xa];
    FortyFour unk_0x0e20[0xa];
    FortyFour unk_0x10c8[0xa];
    HasVF07 unk_0x1370;
    char unk_0x1374[0x40];
    FortyFour unk_0x13b4[0xa];
    FortyFour unk_0x165c[0xa];
    HasVF07 unk_0x1904;
    char unk_0x1908[0x28];
	char unk_0x1930[0x2c];
	char unk_0x195c[0x2c];
	ThirtyFour unk_0x1988[0xa];
	HasVF07 unk_0x1b90;
	char unk_0x1b94[0x28];
    HasVF07 unk_0x1bbc;
	char unk_0x1bc0[0x28];
	HasVF07 unk_0x1be8;
	char unk_0x1bec[0x2c];
	HasVF07 unk_0x1c18;
	char unk_0x1c1c[0x28];
	Sixty unk_0x1c44[0xa];
	HasVF07 unk_0x2004;
	char unk_0x2008[0x70];
	HasVF07 unk_0x2078;
	char unk_0x207c[0x70];
	FiftyC unk_0x20ec[0xa];
	FiftyC unk_0x2484[0xa];
	FiftyC unk_0x281c[0xa];
	FiftyC unk_0x2bb4[0xa];
	NinetyFour unk_0x2f4c[0xa];
	FiftyC unk_0x3514[0xa];
	FiftyC unk_0x38ac[0xa];
	FiftyC unk_0x3c44[0xa];
	HasVF07 unk_0x3fdc;
	char unk_0x3fe0[0x2c];
	HasVF07 unk_0x400c;
	char unk_0x4010[0x30];
	SeventyFour unk_0x4040[0xa];
	TwentyC unk_0x44c8[0xa];
	TwentyC unk_0x4680[0xa];
	CeetyC unk_0x4838[0xa];
	SeventyFour unk_0x5030[0xa];
	SeventyC unk_0x54b8[0xa];
	ThirtyFour unk_0x5990[0xa];
	HasVF07 unk_0x5b98;
	char unk_0x5b9c[0x50];
	HasVF07 unk_0x5bec;
	char unk_0x5bf0[0x28];
	HasVF07 unk_0x5c18;
    char unk_0x5c1c[0x18];
    EfftyFour unk_0x5c34[0x17];
    EfftyFour unk_0x7220[0xe][0xa];
	TwentyC unk_0xf790[0xa];
	TwentyC unk_0xf948[0xa];
	TwentyC unk_0xfb00[0xa];
	FiftyC unk_0xfcb8[0xa];
	Sixty unk_0x10050[0xa];
	HasVF07 unk_0x10410;
	char unk_0x10414[0x58];
	SixtyFour unk_0x1046c[0xa];
	char unk_0x10854[0x38];
	HasVF07 unk_0x1088c;
	char unk_0x10890[0x98];
	FiftyC unk_0x10928[0xa];
	Thirty unk_0x10cc0[0xa];
	SeventyFour unk_0x10ea0[0xa];
	SeventyFour unk_0x11328[0xa];
	SeventyFour unk_0x117b0[0xa];
	HasVF07 unk_0x11c38;
};

}  // namespace script

#endif  // ACNLWA_SCRIPT_INSERT_H
