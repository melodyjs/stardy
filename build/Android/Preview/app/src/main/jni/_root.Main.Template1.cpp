// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/Main.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Main.h>
#include <_root.Main.Template1.h>
#include <_root.TimeLine.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class Main.Template1 :26
// {
// static Template1() :35
static void Main__Template1__cctor__fn(uType* __type)
{
    Main__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"TimeLine"*/]);
}

static void Main__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TimeLine");
    type->SetFields(2,
        ::g::Main_typeof(), offsetof(::g::Main__Template1, __parent1), uFieldFlagsWeak,
        ::g::Main_typeof(), offsetof(::g::Main__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Main__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Main__Template1__New2_fn, 0, true, type, 2, ::g::Main_typeof(), ::g::Main_typeof()));
}

::g::Uno::UX::Template_type* Main__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Main__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Main.Template1", options);
    type->fp_build_ = Main__Template1_build;
    type->fp_cctor_ = Main__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Main__Template1__New1_fn;
    return type;
}

// public Template1(Main parent, Main parentInstance) :30
void Main__Template1__ctor_1_fn(Main__Template1* __this, ::g::Main* parent, ::g::Main* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :38
void Main__Template1__New1_fn(Main__Template1* __this, uObject** __retval)
{
    uStackFrame __("Main.Template1", "New()");
    ::g::TimeLine* __self1 = ::g::TimeLine::New5(uPtr(__this->__parent1)->router);
    __self1->Name(Main__Template1::__selector0());
    return *__retval = __self1, void();
}

// public Template1 New(Main parent, Main parentInstance) :30
void Main__Template1__New2_fn(::g::Main* parent, ::g::Main* parentInstance, Main__Template1** __retval)
{
    *__retval = Main__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector Main__Template1::__selector0_;

// public Template1(Main parent, Main parentInstance) [instance] :30
void Main__Template1::ctor_1(::g::Main* parent, ::g::Main* parentInstance)
{
    ctor_(::STRINGS[0/*"TimeLine"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(Main parent, Main parentInstance) [static] :30
Main__Template1* Main__Template1::New2(::g::Main* parent, ::g::Main* parentInstance)
{
    Main__Template1* obj1 = (Main__Template1*)uNew(Main__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
