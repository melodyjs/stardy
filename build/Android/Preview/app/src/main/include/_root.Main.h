// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/Main.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Main;}

namespace g{

// public partial sealed class Main :2
// {
::g::Fuse::AppBase_type* Main_typeof();
void Main__ctor_4_fn(Main* __this);
void Main__InitializeUX_fn(Main* __this);
void Main__New1_fn(Main** __retval);

struct Main : ::g::Fuse::App
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Main_typeof()->Init(), __selector0_; }
    uStrong< ::g::Fuse::Navigation::Router*> router;

    void ctor_4();
    void InitializeUX();
    static Main* New1();
};
// }

} // ::g
