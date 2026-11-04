#include "acnlwa/script/Insert.h"

namespace script {

extern uint DAT_0095debc;
extern void FUN_00312a4c(...);
extern void FUN_005edca8(...);
extern void FUN_005ea540(...);

void Insert::VF02() {}

void Insert::VF03(uint r1)
{
    FortyFour * e = &this->unk_0x0008[r1];
    e->VF07();
}

void Insert::VF04(uint r1)
{
    FortyFour * e = &this->unk_0x0448[r1];
    e->VF07();
}

void Insert::VF05(uint r1)
{
    HasVF07::callVF07(&this->unk_0x06f0[r1]);
}

void Insert::VF06(uint r1)
{
    FiftyC * c = &this->unk_0x0a88[r1];
    c->VF07();
}

void Insert::VF07(uint r1)
{
    HasVF07::callVF07(&this->unk_0x0e20[r1]);
}

void Insert::VF08(uint r1)
{
    HasVF07::callVF07(&this->unk_0x10c8[r1]);
}

void Insert::VF09()
{
    HasVF07::callVF07(&this->unk_0x1370);
}

void Insert::VF10(uint r1)
{
    HasVF07::callVF07(&this->unk_0x13b4[r1]);
}

void Insert::VF11(uint r1)
{
    HasVF07::callVF07(&this->unk_0x165c[r1]);
}

void Insert::VF12()
{
    HasVF07::callVF07(&this->unk_0x1904);
}

void Insert::VF13()
{
    HasVF07::callVF07(&this->unk_0x1bbc);
}

void Insert::VF14()
{
    HasVF07::callVF07(&this->unk_0x1be8);
}

void Insert::VF15()
{
    HasVF07::callVF07(&this->unk_0x1c18);
}

void Insert::VF16()
{
    HasVF07::callVF07(&this->unk_0x2004);
}

void Insert::VF17()
{
    HasVF07::callVF07(&this->unk_0x2078);
}

void Insert::VF18()
{
	return;
}

void Insert::VF19(FortyFour * arg1, uint arg2)
{
    if (arg2 >= 0x10) return;
    FortyFour * e = &this->unk_0x0008[arg2];
    FortyFour * f = arg1;
    e->VF05(f);
    e->unk_0x3e = f->unk_0x3e;
    e->unk_0x40 = f->unk_0x40;
}

void Insert::VF20() {}

void Insert::VF21(uint month, uint i)
{
    if (month - 1 < 12)
    {
        FUN_00312a4c(DAT_0095debc, &this->unk_0x06f0[i], "STR_Month");
    }
}

void Insert::VF22() {}

void Insert::VF23() {}

void Insert::VF24() {}

void Insert::VF25() {}

void Insert::VF26() {}

void Insert::VF27(uint r1)
{
    HasVF07::callVF05(&this->unk_0x1904, r1);
}

void Insert::VF28(uint r1)
{
    HasVF07::callVF05(&this->unk_0x1b90, r1);
}

void Insert::VF29(uint r1)
{
    HasVF07::callVF05(&this->unk_0x1bbc, r1);
}

void Insert::VF30(uint r1)
{
    HasVF07::callVF05(&this->unk_0x5b98, r1);
}

void Insert::VF31(uint r1)
{
    HasVF07::callVF05(&this->unk_0x5c18, r1);
}

void Insert::VF32(uint r1, uint i)
{
    if (i >= 0x17) return;
    EfftyFour * e = &this->unk_0x5c34[i];
    e->VF05(r1);
}

void Insert::VF33(uint r1, short r2, uint r3) {

    if (r2 < 0 || r2 >= 0xe || r3 >= 0xa) return;
    HasVF07::callVF05(&this->unk_0x7220[r2][r3], r1);
}

void Insert::VF34(uint r1, uint r2)
{
    if (r2 >= 0xa) return;
    TwentyC * e = &this->unk_0xf790[r2];
    e->VF05(r1);
}

void Insert::VF35(uint r1, uint r2)
{
    if (r2 >= 0xa) return;
    TwentyC * e = &this->unk_0xf948[r2];
    e->VF05(r1);
}

void Insert::VF36(uint r1, uint r2)
{
    if (r2 >= 0xa) return;
    TwentyC * e = &this->unk_0xfb00[r2];
    e->VF05(r1);
}

void Insert::VF37(uint r1, uint r2)
{
    if (r2 >= 0xa) return;
    FiftyC * e = &this->unk_0xfcb8[r2];
    e->VF05(r1);
}

void Insert::VF38(uint r1, uint r2)
{
    if (r2 >= 0xa) return;
    HasVF07::callVF05(&this->unk_0x10050[r2], r1);
}

void Insert::VF39(uint r1)
{
	HasVF07::callVF05(&this->unk_0x10410, r1);
}

void Insert::VF40(uint r1, uint r2)
{
    if (r2 >= 0xa) return;
    SixtyFour * e = &this->unk_0x1046c[r2];
    e->VF05(r1);
}

void Insert::VF41() {}

void Insert::VF42(uint r1)
{
	HasVF07::callVF05(&this->unk_0x1088c, r1);
}

void Insert::VF43(uint r1, uint r2)
{
    if (r2 >= 0xa) return;
    FiftyC * e = &this->unk_0x10928[r2];
    e->VF05(r1);
}

void Insert::VF44(uint r1, uint r2)
{
    if (r2 >= 0xa) return;
    Thirty * e = &this->unk_0x10cc0[r2];
    e->VF05(r1);
}

void Insert::VF45(uint r1, uint r2)
{
    if (r2 >= 0xa) return;
    SeventyFour * e = &this->unk_0x10ea0[r2];
    e->VF05(r1);
}

void Insert::VF46(uint r1, uint r2)
{
    if (r2 >= 0xa) return;
    HasVF07::callVF05(&this->unk_0x11328[r2], r1);
}

void Insert::VF47(uint r1, uint r2)
{
    if (r2 >= 0xa) return;
    SeventyFour * e = &this->unk_0x117b0[r2];
    e->VF05(r1);
}

void Insert::VF48(uint r1)
{
	HasVF07::callVF05(&this->unk_0x11c38, r1);
}

void Insert::VF55() {}

void Insert::VF56() {}

void Insert::VF57() {}

void Insert::VF58() {}

void Insert::VF59(uint r1)
{
	FUN_005edca8(this, &unk_0x0e20[r1]);
}

void Insert::VF60(uint r1)
{
	FUN_005edca8(this, &unk_0x10c8[r1]);
}

void Insert::VF61() {}

void Insert::VF62() {}

void Insert::VF63() {}

void Insert::VF64() {}

void Insert::VF66() {}

void Insert::VF67() {}

void Insert::VF68() {}

void Insert::VF69() {}

void Insert::VF70() {}

void Insert::VF71() {}

void Insert::VF72() {}

void Insert::VF74() {}

void Insert::VF75() {}

void Insert::VF76() {}

void Insert::VF77() {}

void Insert::VF78() {}

void Insert::VF79() {}

void Insert::VF80() {}

void Insert::VF81() {}

void Insert::VF82() {}

void Insert::VF83() {}

void Insert::VF84() {}

void Insert::VF87() {}

void Insert::VF88() {}

void Insert::VF89() {}

void Insert::VF90() {}

void Insert::VF91() {}

void Insert::VF92() {}

void Insert::VF94() {}

void Insert::VF95() {}

void Insert::VF96() {}

void Insert::VF97() {}

void Insert::VF98() {}

void Insert::VF99()
{
	FUN_005edca8(this, &unk_0x5c18);
}

void Insert::VF100() {}

void Insert::VF101() {}

void Insert::VF103() {}

void Insert::VF104() {}

void Insert::VF105() {}

void Insert::VF106() {}

void Insert::VF107() {}

void Insert::VF108() {}

void Insert::VF109() {}

void Insert::VF110() {}

void Insert::VF111() {}

void Insert::VF112() {}

void Insert::VF113() {}

void Insert::VF114() {}

void Insert::VF115() {}

void Insert::VF116() {}

void Insert::VF117() {}

FortyFour * Insert::VF125(uint r1)
{
	return &unk_0x0008[r1];
}

FortyFour * Insert::VF126(uint r1)
{
	return &unk_0x0448[r1];
}

FiftyC * Insert::VF127(uint r1)
{
	return &unk_0x06f0[r1];
}


FiftyC * Insert::VF128(uint r1)
{
	return &unk_0x0a88[r1];
}

FortyFour * Insert::VF129(uint r1)
{
	return &unk_0x0e20[r1];
}

FortyFour * Insert::VF130(uint r1)
{
	return &unk_0x10c8[r1];
}

HasVF07 * Insert::VF131()
{
	return &unk_0x1370;
}

FortyFour * Insert::VF132(uint r1)
{
	return &unk_0x13b4[r1];
}

FortyFour * Insert::VF133(uint r1)
{
	return &unk_0x165c[r1];
}

HasVF07 * Insert::VF134()
{
	return &unk_0x1904;
}

void * Insert::VF136()
{
	return &unk_0x1930;
}

void * Insert::VF137()
{
	return &unk_0x195c;
}

ThirtyFour * Insert::VF138(uint r1)
{
	return &unk_0x1988[r1];
}

HasVF07 * Insert::VF139()
{
	return &unk_0x1b90;
}

HasVF07 * Insert::VF140()
{
	return &unk_0x1bbc;
}

HasVF07 * Insert::VF141()
{
	return &unk_0x1be8;
}

HasVF07 * Insert::VF142()
{
	return &unk_0x1c18;
}

Sixty * Insert::VF144(uint r1)
{
	return &unk_0x1c44[r1];
}

HasVF07 * Insert::VF145()
{
	return &unk_0x2004;
}

HasVF07 * Insert::VF146()
{
	return &unk_0x2078;
}

FiftyC * Insert::VF147(uint r1)
{
	return &unk_0x20ec[r1];
}

FiftyC * Insert::VF148(uint r1)
{
	return &unk_0x2484[r1];
}

FiftyC * Insert::VF149(uint r1)
{
	return &unk_0x281c[r1];
}

FiftyC * Insert::VF150(uint r1)
{
	return &unk_0x2bb4[r1];
}

NinetyFour * Insert::VF151(uint r1)
{
	return &unk_0x2f4c[r1];
}

FiftyC * Insert::VF152(uint r1)
{
	return &unk_0x3514[r1];
}

FiftyC * Insert::VF153(uint r1)
{
	return &unk_0x38ac[r1];
}

FiftyC * Insert::VF154(uint r1)
{
	return &unk_0x3c44[r1];
}

HasVF07 * Insert::VF157()
{
	return &unk_0x3fdc;
}

HasVF07 * Insert::VF158()
{
	return &unk_0x400c;
}

SeventyFour * Insert::VF159(uint r1)
{
	return &unk_0x4040[r1];
}

TwentyC * Insert::VF160(uint r1)
{
	return &unk_0x44c8[r1];
}

TwentyC * Insert::VF161(uint r1)
{
	return &unk_0x4680[r1];
}

CeetyC * Insert::VF162(uint r1)
{
	return &unk_0x4838[r1];
}

SeventyFour * Insert::VF164(uint r1)
{
	return &unk_0x5030[r1];
}

SeventyC * Insert::VF165(uint r1)
{
	return &unk_0x54b8[r1];
}

ThirtyFour * Insert::VF166(uint r1)
{
	return &unk_0x5990[r1];
}

HasVF07 * Insert::VF167()
{
	return &unk_0x5b98;
}

HasVF07 * Insert::VF168()
{
	return &unk_0x5bec;
}

HasVF07 * Insert::VF169()
{
	return &unk_0x5c18;
}

EfftyFour * Insert::VF170(uint r1)
{
	return &unk_0x5c34[r1];
}

void Insert::VF171() {}

void Insert::VF172()
{
	FUN_005ea540(this);
}

TwentyC * Insert::VF173(uint r1)
{
	return &unk_0xf790[r1];
}

TwentyC * Insert::VF174(uint r1)
{
	return &unk_0xf948[r1];
}

TwentyC * Insert::VF175(uint r1)
{
	return &unk_0xfb00[r1];
}

FiftyC * Insert::VF176(uint r1)
{
	return &unk_0xfcb8[r1];
}

Sixty * Insert::VF177(uint r1)
{
	return &unk_0x10050[r1];
}

HasVF07 * Insert::VF178()
{
	return &unk_0x10410;
}

SixtyFour * Insert::VF179(uint r1)
{
	return &unk_0x1046c[r1];
}

void * Insert::VF180()
{
	return &unk_0x10854;
}

HasVF07 * Insert::VF181()
{
	return &unk_0x1088c;
}

FiftyC * Insert::VF182(uint r1)
{
	return &unk_0x10928[r1];
}

Thirty * Insert::VF183(uint r1)
{
	return &unk_0x10cc0[r1];
}

SeventyFour * Insert::VF184(uint r1)
{
	return &unk_0x10ea0[r1];
}

SeventyFour * Insert::VF185(uint r1)
{
	return &unk_0x11328[r1];
}

SeventyFour * Insert::VF186(uint r1)
{
	return &unk_0x117b0[r1];
}

HasVF07 * Insert::VF187()
{
	return &unk_0x11c38;
}

void Insert::VF188()
{
	FUN_005ea540(this);
}

}  // namespace script
