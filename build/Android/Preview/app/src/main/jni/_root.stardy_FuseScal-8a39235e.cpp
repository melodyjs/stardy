// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/stardy.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.stardy_FuseScal-8a39235e.h>
#include <Fuse.Scaling.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class stardy_FuseScaling_X_Property :18
// {
static void stardy_FuseScaling_X_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Scaling_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Scaling*/], offsetof(::g::stardy_FuseScaling_X_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* stardy_FuseScaling_X_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(stardy_FuseScaling_X_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("stardy_FuseScaling_X_Property", options);
    type->fp_build_ = stardy_FuseScaling_X_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))stardy_FuseScaling_X_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))stardy_FuseScaling_X_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))stardy_FuseScaling_X_Property__Set1_fn;
    return type;
}

// public stardy_FuseScaling_X_Property(Fuse.Scaling obj, Uno.UX.Selector name) :21
void stardy_FuseScaling_X_Property__ctor_3_fn(stardy_FuseScaling_X_Property* __this, ::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :23
void stardy_FuseScaling_X_Property__Get1_fn(stardy_FuseScaling_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("stardy_FuseScaling_X_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Scaling*>(obj, ::TYPES[0/*Fuse.Scaling*/]))->X(), void();
}

// public stardy_FuseScaling_X_Property New(Fuse.Scaling obj, Uno.UX.Selector name) :21
void stardy_FuseScaling_X_Property__New1_fn(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector* name, stardy_FuseScaling_X_Property** __retval)
{
    *__retval = stardy_FuseScaling_X_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :22
void stardy_FuseScaling_X_Property__get_Object_fn(stardy_FuseScaling_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :24
void stardy_FuseScaling_X_Property__Set1_fn(stardy_FuseScaling_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("stardy_FuseScaling_X_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Scaling*>(obj, ::TYPES[0/*Fuse.Scaling*/]))->X(v_);
}

// public stardy_FuseScaling_X_Property(Fuse.Scaling obj, Uno.UX.Selector name) [instance] :21
void stardy_FuseScaling_X_Property::ctor_3(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public stardy_FuseScaling_X_Property New(Fuse.Scaling obj, Uno.UX.Selector name) [static] :21
stardy_FuseScaling_X_Property* stardy_FuseScaling_X_Property::New1(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector name)
{
    stardy_FuseScaling_X_Property* obj1 = (stardy_FuseScaling_X_Property*)uNew(stardy_FuseScaling_X_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
