// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/TimeLine.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.NewsItem.h>
#include <_root.TimeLine.h>
#include <_root.TimeLine.Template.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>

namespace g{

// public partial sealed class TimeLine.Template :6
// {
// static Template() :15
static void TimeLine__Template__cctor__fn(uType* __type)
{
}

static void TimeLine__Template_build(uType* type)
{
    type->SetFields(2,
        ::g::TimeLine_typeof(), offsetof(::g::TimeLine__Template, __parent1), uFieldFlagsWeak,
        ::g::TimeLine_typeof(), offsetof(::g::TimeLine__Template, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TimeLine__Template__New2_fn, 0, true, type, 2, ::g::TimeLine_typeof(), ::g::TimeLine_typeof()));
}

::g::Uno::UX::Template_type* TimeLine__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(TimeLine__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("TimeLine.Template", options);
    type->fp_build_ = TimeLine__Template_build;
    type->fp_cctor_ = TimeLine__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))TimeLine__Template__New1_fn;
    return type;
}

// public Template(TimeLine parent, TimeLine parentInstance) :10
void TimeLine__Template__ctor_1_fn(TimeLine__Template* __this, ::g::TimeLine* parent, ::g::TimeLine* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :18
void TimeLine__Template__New1_fn(TimeLine__Template* __this, uObject** __retval)
{
    uStackFrame __("TimeLine.Template", "New()");
    ::g::NewsItem* __self1 = ::g::NewsItem::New5();
    return *__retval = __self1, void();
}

// public Template New(TimeLine parent, TimeLine parentInstance) :10
void TimeLine__Template__New2_fn(::g::TimeLine* parent, ::g::TimeLine* parentInstance, TimeLine__Template** __retval)
{
    *__retval = TimeLine__Template::New2(parent, parentInstance);
}

// public Template(TimeLine parent, TimeLine parentInstance) [instance] :10
void TimeLine__Template::ctor_1(::g::TimeLine* parent, ::g::TimeLine* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(TimeLine parent, TimeLine parentInstance) [static] :10
TimeLine__Template* TimeLine__Template::New2(::g::TimeLine* parent, ::g::TimeLine* parentInstance)
{
    TimeLine__Template* obj1 = (TimeLine__Template*)uNew(TimeLine__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
