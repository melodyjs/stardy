// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/stardy.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct stardy_FuseDrawingImageFill_File_Property;}

namespace g{

// internal sealed class stardy_FuseDrawingImageFill_File_Property :43
// {
::g::Uno::UX::Property1_type* stardy_FuseDrawingImageFill_File_Property_typeof();
void stardy_FuseDrawingImageFill_File_Property__ctor_3_fn(stardy_FuseDrawingImageFill_File_Property* __this, ::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name);
void stardy_FuseDrawingImageFill_File_Property__Get1_fn(stardy_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval);
void stardy_FuseDrawingImageFill_File_Property__New1_fn(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name, stardy_FuseDrawingImageFill_File_Property** __retval);
void stardy_FuseDrawingImageFill_File_Property__get_Object_fn(stardy_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void stardy_FuseDrawingImageFill_File_Property__Set1_fn(stardy_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin);

struct stardy_FuseDrawingImageFill_File_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Drawing::ImageFill*> _obj;

    void ctor_3(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name);
    static stardy_FuseDrawingImageFill_File_Property* New1(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
