// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/stardy.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.stardy_FuseDraw-82b90599.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class stardy_FuseDrawingImageFill_File_Property :43
// {
static void stardy_FuseDrawingImageFill_File_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::ImageFill_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Drawing.ImageFill*/], offsetof(::g::stardy_FuseDrawingImageFill_File_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* stardy_FuseDrawingImageFill_File_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(stardy_FuseDrawingImageFill_File_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("stardy_FuseDrawingImageFill_File_Property", options);
    type->fp_build_ = stardy_FuseDrawingImageFill_File_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))stardy_FuseDrawingImageFill_File_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))stardy_FuseDrawingImageFill_File_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))stardy_FuseDrawingImageFill_File_Property__Set1_fn;
    return type;
}

// public stardy_FuseDrawingImageFill_File_Property(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) :46
void stardy_FuseDrawingImageFill_File_Property__ctor_3_fn(stardy_FuseDrawingImageFill_File_Property* __this, ::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.FileSource Get(Uno.UX.PropertyObject obj) :48
void stardy_FuseDrawingImageFill_File_Property__Get1_fn(stardy_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval)
{
    uStackFrame __("stardy_FuseDrawingImageFill_File_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::ImageFill*>(obj, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->File(), void();
}

// public stardy_FuseDrawingImageFill_File_Property New(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) :46
void stardy_FuseDrawingImageFill_File_Property__New1_fn(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name, stardy_FuseDrawingImageFill_File_Property** __retval)
{
    *__retval = stardy_FuseDrawingImageFill_File_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :47
void stardy_FuseDrawingImageFill_File_Property__get_Object_fn(stardy_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.FileSource v, Uno.UX.IPropertyListener origin) :49
void stardy_FuseDrawingImageFill_File_Property__Set1_fn(stardy_FuseDrawingImageFill_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin)
{
    uStackFrame __("stardy_FuseDrawingImageFill_File_Property", "Set(Uno.UX.PropertyObject,Uno.UX.FileSource,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Drawing::ImageFill*>(obj, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->File(v);
}

// public stardy_FuseDrawingImageFill_File_Property(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) [instance] :46
void stardy_FuseDrawingImageFill_File_Property::ctor_3(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public stardy_FuseDrawingImageFill_File_Property New(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) [static] :46
stardy_FuseDrawingImageFill_File_Property* stardy_FuseDrawingImageFill_File_Property::New1(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name)
{
    stardy_FuseDrawingImageFill_File_Property* obj1 = (stardy_FuseDrawingImageFill_File_Property*)uNew(stardy_FuseDrawingImageFill_File_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
