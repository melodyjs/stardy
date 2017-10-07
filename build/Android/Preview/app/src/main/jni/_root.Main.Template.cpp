// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/Main.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Main.h>
#include <_root.Main.Template.h>
#include <_root.MainView.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class Main.Template :5
// {
// static Template() :14
static void Main__Template__cctor__fn(uType* __type)
{
    Main__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"MainView"*/]);
}

static void Main__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("MainView");
    type->SetFields(2,
        ::g::Main_typeof(), offsetof(::g::Main__Template, __parent1), uFieldFlagsWeak,
        ::g::Main_typeof(), offsetof(::g::Main__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Main__Template::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Main__Template__New2_fn, 0, true, type, 2, ::g::Main_typeof(), ::g::Main_typeof()));
}

::g::Uno::UX::Template_type* Main__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Main__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Main.Template", options);
    type->fp_build_ = Main__Template_build;
    type->fp_cctor_ = Main__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Main__Template__New1_fn;
    return type;
}

// public Template(Main parent, Main parentInstance) :9
void Main__Template__ctor_1_fn(Main__Template* __this, ::g::Main* parent, ::g::Main* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :17
void Main__Template__New1_fn(Main__Template* __this, uObject** __retval)
{
    uStackFrame __("Main.Template", "New()");
    ::g::MainView* __self1 = ::g::MainView::New5(uPtr(__this->__parent1)->router);
    __self1->Name(Main__Template::__selector0());
    return *__retval = __self1, void();
}

// public Template New(Main parent, Main parentInstance) :9
void Main__Template__New2_fn(::g::Main* parent, ::g::Main* parentInstance, Main__Template** __retval)
{
    *__retval = Main__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector Main__Template::__selector0_;

// public Template(Main parent, Main parentInstance) [instance] :9
void Main__Template::ctor_1(::g::Main* parent, ::g::Main* parentInstance)
{
    ctor_(::STRINGS[0/*"MainView"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(Main parent, Main parentInstance) [static] :9
Main__Template* Main__Template::New2(::g::Main* parent, ::g::Main* parentInstance)
{
    Main__Template* obj1 = (Main__Template*)uNew(Main__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
