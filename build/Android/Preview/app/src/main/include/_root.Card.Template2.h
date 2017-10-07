// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/Card.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Card;}
namespace g{struct Card__Template2;}

namespace g{

// public partial sealed class Card.Template2 :51
// {
::g::Uno::UX::Template_type* Card__Template2_typeof();
void Card__Template2__ctor_1_fn(Card__Template2* __this, ::g::Card* parent, ::g::Card* parentInstance);
void Card__Template2__New1_fn(Card__Template2* __this, uObject** __retval);
void Card__Template2__New2_fn(::g::Card* parent, ::g::Card* parentInstance, Card__Template2** __retval);

struct Card__Template2 : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Card__Template2_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::Card*> __parent1;
    uWeak< ::g::Card*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Card__Template2_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> temp_File_inst;

    void ctor_1(::g::Card* parent, ::g::Card* parentInstance);
    static Card__Template2* New2(::g::Card* parent, ::g::Card* parentInstance);
};
// }

} // ::g
