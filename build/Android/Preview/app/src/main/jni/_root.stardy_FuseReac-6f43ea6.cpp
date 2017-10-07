// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/stardy.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.stardy_FuseReac-6f43ea6.h>
#include <Fuse.Reactive.Each.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class stardy_FuseReactiveEach_Count_Property :51
// {
static void stardy_FuseReactiveEach_Count_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Reactive::Each_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Reactive.Each*/], offsetof(::g::stardy_FuseReactiveEach_Count_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* stardy_FuseReactiveEach_Count_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(stardy_FuseReactiveEach_Count_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("stardy_FuseReactiveEach_Count_Property", options);
    type->fp_build_ = stardy_FuseReactiveEach_Count_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))stardy_FuseReactiveEach_Count_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))stardy_FuseReactiveEach_Count_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))stardy_FuseReactiveEach_Count_Property__Set1_fn;
    return type;
}

// public stardy_FuseReactiveEach_Count_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) :54
void stardy_FuseReactiveEach_Count_Property__ctor_3_fn(stardy_FuseReactiveEach_Count_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed int Get(Uno.UX.PropertyObject obj) :56
void stardy_FuseReactiveEach_Count_Property__Get1_fn(stardy_FuseReactiveEach_Count_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* __retval)
{
    uStackFrame __("stardy_FuseReactiveEach_Count_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Reactive::Each*>(obj, ::TYPES[0/*Fuse.Reactive.Each*/]))->Count1(), void();
}

// public stardy_FuseReactiveEach_Count_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) :54
void stardy_FuseReactiveEach_Count_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, stardy_FuseReactiveEach_Count_Property** __retval)
{
    *__retval = stardy_FuseReactiveEach_Count_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :55
void stardy_FuseReactiveEach_Count_Property__get_Object_fn(stardy_FuseReactiveEach_Count_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, int v, Uno.UX.IPropertyListener origin) :57
void stardy_FuseReactiveEach_Count_Property__Set1_fn(stardy_FuseReactiveEach_Count_Property* __this, ::g::Uno::UX::PropertyObject* obj, int* v, uObject* origin)
{
    uStackFrame __("stardy_FuseReactiveEach_Count_Property", "Set(Uno.UX.PropertyObject,int,Uno.UX.IPropertyListener)");
    int v_ = *v;
    uPtr(uCast< ::g::Fuse::Reactive::Each*>(obj, ::TYPES[0/*Fuse.Reactive.Each*/]))->Count1(v_);
}

// public stardy_FuseReactiveEach_Count_Property(Fuse.Reactive.Each obj, Uno.UX.Selector name) [instance] :54
void stardy_FuseReactiveEach_Count_Property::ctor_3(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public stardy_FuseReactiveEach_Count_Property New(Fuse.Reactive.Each obj, Uno.UX.Selector name) [static] :54
stardy_FuseReactiveEach_Count_Property* stardy_FuseReactiveEach_Count_Property::New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name)
{
    stardy_FuseReactiveEach_Count_Property* obj1 = (stardy_FuseReactiveEach_Count_Property*)uNew(stardy_FuseReactiveEach_Count_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
