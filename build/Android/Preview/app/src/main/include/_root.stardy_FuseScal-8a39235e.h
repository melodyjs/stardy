// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/stardy.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct stardy_FuseScaling_X_Property;}

namespace g{

// internal sealed class stardy_FuseScaling_X_Property :18
// {
::g::Uno::UX::Property1_type* stardy_FuseScaling_X_Property_typeof();
void stardy_FuseScaling_X_Property__ctor_3_fn(stardy_FuseScaling_X_Property* __this, ::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector* name);
void stardy_FuseScaling_X_Property__Get1_fn(stardy_FuseScaling_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void stardy_FuseScaling_X_Property__New1_fn(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector* name, stardy_FuseScaling_X_Property** __retval);
void stardy_FuseScaling_X_Property__get_Object_fn(stardy_FuseScaling_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void stardy_FuseScaling_X_Property__Set1_fn(stardy_FuseScaling_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct stardy_FuseScaling_X_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Scaling*> _obj;

    void ctor_3(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector name);
    static stardy_FuseScaling_X_Property* New1(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
