// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/Main.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Main;}
namespace g{struct Main__Template1;}

namespace g{

// public partial sealed class Main.Template1 :26
// {
::g::Uno::UX::Template_type* Main__Template1_typeof();
void Main__Template1__ctor_1_fn(Main__Template1* __this, ::g::Main* parent, ::g::Main* parentInstance);
void Main__Template1__New1_fn(Main__Template1* __this, uObject** __retval);
void Main__Template1__New2_fn(::g::Main* parent, ::g::Main* parentInstance, Main__Template1** __retval);

struct Main__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::Main*> __parent1;
    uWeak< ::g::Main*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Main__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::Main* parent, ::g::Main* parentInstance);
    static Main__Template1* New2(::g::Main* parent, ::g::Main* parentInstance);
};
// }

} // ::g
