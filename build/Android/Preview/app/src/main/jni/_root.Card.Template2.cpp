// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/Card.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Card.h>
#include <_root.Card.Template2.h>
#include <_root.stardy_FuseDraw-82b90599.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.WrapMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[2];
static uType* TYPES[4];

namespace g{

// public partial sealed class Card.Template2 :51
// {
// static Template2() :64
static void Card__Template2__cctor__fn(uType* __type)
{
    Card__Template2::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    Card__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"File"*/]);
}

static void Card__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File");
    ::STRINGS[1] = uString::Const("");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Card__Template2, __g_nametable1), 0,
        ::g::Card_typeof(), offsetof(::g::Card__Template2, __parent1), uFieldFlagsWeak,
        ::g::Card_typeof(), offsetof(::g::Card__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::Card__Template2, temp_File_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Card__Template2::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card__Template2::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Card__Template2__New2_fn, 0, true, type, 2, ::g::Card_typeof(), ::g::Card_typeof()));
}

::g::Uno::UX::Template_type* Card__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Card__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Card.Template2", options);
    type->fp_build_ = Card__Template2_build;
    type->fp_cctor_ = Card__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Card__Template2__New1_fn;
    return type;
}

// public Template2(Card parent, Card parentInstance) :55
void Card__Template2__ctor_1_fn(Card__Template2* __this, ::g::Card* parent, ::g::Card* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :67
void Card__Template2__New1_fn(Card__Template2* __this, uObject** __retval)
{
    uStackFrame __("Card.Template2", "New()");
    ::g::Fuse::Controls::Circle* __self1 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::ImageFill* temp = ::g::Fuse::Drawing::ImageFill::New2();
    __this->temp_File_inst = ::g::stardy_FuseDrawingImageFill_File_Property::New1(temp, Card__Template2::__selector0());
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*""*/]);
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, Card__Template2::__g_static_nametable1());
    ::g::Fuse::Drawing::Stroke* temp2 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp3 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_File_inst, (uObject*)temp1, __this->__g_nametable1, 3);
    __self1->Color(::g::Fuse::Drawing::Colors::Red());
    __self1->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    __self1->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, -6.0f, 0.0f));
    temp2->Width(2.0f);
    temp2->Brush(temp3);
    temp->WrapMode(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Fills()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Strokes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    return *__retval = __self1, void();
}

// public Template2 New(Card parent, Card parentInstance) :55
void Card__Template2__New2_fn(::g::Card* parent, ::g::Card* parentInstance, Card__Template2** __retval)
{
    *__retval = Card__Template2::New2(parent, parentInstance);
}

uSStrong<uArray*> Card__Template2::__g_static_nametable1_;
::g::Uno::UX::Selector Card__Template2::__selector0_;

// public Template2(Card parent, Card parentInstance) [instance] :55
void Card__Template2::ctor_1(::g::Card* parent, ::g::Card* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(Card parent, Card parentInstance) [static] :55
Card__Template2* Card__Template2::New2(::g::Card* parent, ::g::Card* parentInstance)
{
    Card__Template2* obj1 = (Card__Template2*)uNew(Card__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
