// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/stardy.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct stardy_FuseControlsImage_Url_Property;}

namespace g{

// internal sealed class stardy_FuseControlsImage_Url_Property :115
// {
::g::Uno::UX::Property1_type* stardy_FuseControlsImage_Url_Property_typeof();
void stardy_FuseControlsImage_Url_Property__ctor_3_fn(stardy_FuseControlsImage_Url_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name);
void stardy_FuseControlsImage_Url_Property__Get1_fn(stardy_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void stardy_FuseControlsImage_Url_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, stardy_FuseControlsImage_Url_Property** __retval);
void stardy_FuseControlsImage_Url_Property__get_Object_fn(stardy_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void stardy_FuseControlsImage_Url_Property__Set1_fn(stardy_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct stardy_FuseControlsImage_Url_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Image*> _obj;

    void ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
    static stardy_FuseControlsImage_Url_Property* New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
