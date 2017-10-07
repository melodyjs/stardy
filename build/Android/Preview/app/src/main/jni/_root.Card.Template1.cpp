// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/Card.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Card.h>
#include <_root.Card.Template1.h>
#include <_root.stardy_bundle.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class Card.Template1 :28
// {
// static Template1() :37
static void Card__Template1__cctor__fn(uType* __type)
{
}

static void Card__Template1_build(uType* type)
{
    type->SetFields(2,
        ::g::Card_typeof(), offsetof(::g::Card__Template1, __parent1), uFieldFlagsWeak,
        ::g::Card_typeof(), offsetof(::g::Card__Template1, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Card__Template1__New2_fn, 0, true, type, 2, ::g::Card_typeof(), ::g::Card_typeof()));
}

::g::Uno::UX::Template_type* Card__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Card__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Card.Template1", options);
    type->fp_build_ = Card__Template1_build;
    type->fp_cctor_ = Card__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Card__Template1__New1_fn;
    return type;
}

// public Template1(Card parent, Card parentInstance) :32
void Card__Template1__ctor_1_fn(Card__Template1* __this, ::g::Card* parent, ::g::Card* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :40
void Card__Template1__New1_fn(Card__Template1* __this, uObject** __retval)
{
    uStackFrame __("Card.Template1", "New()");
    ::g::Fuse::Controls::Image* __self1 = ::g::Fuse::Controls::Image::New3();
    __self1->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    __self1->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    __self1->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    __self1->File(::g::Uno::UX::BundleFileSource::New1(::g::stardy_bundle::star57b438ad()));
    return *__retval = __self1, void();
}

// public Template1 New(Card parent, Card parentInstance) :32
void Card__Template1__New2_fn(::g::Card* parent, ::g::Card* parentInstance, Card__Template1** __retval)
{
    *__retval = Card__Template1::New2(parent, parentInstance);
}

// public Template1(Card parent, Card parentInstance) [instance] :32
void Card__Template1::ctor_1(::g::Card* parent, ::g::Card* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(Card parent, Card parentInstance) [static] :32
Card__Template1* Card__Template1::New2(::g::Card* parent, ::g::Card* parentInstance)
{
    Card__Template1* obj1 = (Card__Template1*)uNew(Card__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
