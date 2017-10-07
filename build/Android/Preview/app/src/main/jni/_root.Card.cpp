// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/Card.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Card.h>
#include <_root.Card.Template.h>
#include <_root.Card.Template1.h>
#include <_root.Card.Template2.h>
#include <_root.stardy_bundle.h>
#include <_root.stardy_FuseCont-fee544c.h>
#include <_root.stardy_FuseDraw-82b90599.h>
#include <_root.stardy_FuseElem-d9f8361.h>
#include <_root.stardy_FuseReac-6f43ea6.h>
#include <_root.stardy_FuseReac-95e4a071.h>
#include <_root.stardy_FuseScal-68ee69bb.h>
#include <_root.stardy_FuseScal-8a39235e.h>
#include <_root.stardy_FuseScal-a48a8443.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shadow.-722079e.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.WrapMode.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Gestures.SetSwipeActive.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.SwipingAnimation.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.Activ-5bc1c951.h>
#include <Fuse.Navigation.Enter-a69250fd.h>
#include <Fuse.Navigation.Exiti-99f47629.h>
#include <Fuse.Navigation.Navig-ae9e86c7.h>
#include <Fuse.Navigation.While-89f5a828.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[25];
static uType* TYPES[10];

namespace g{

// public partial sealed class Card :2
// {
// static Card() :120
static void Card__cctor_4_fn(uType* __type)
{
    Card::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[0/*"pageScaling"*/], ::STRINGS[1/*"swipe"*/], ::STRINGS[2/*"topPanel"*/], ::STRINGS[3/*"topPanelRect"*/], ::STRINGS[4/*"bottomPanel"*/], ::STRINGS[5/*"bottomPanel...*/]);
    Card::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Opacity"*/]);
    Card::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Factor"*/]);
    Card::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"X"*/]);
    Card::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Y"*/]);
    Card::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Value"*/]);
    Card::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"File"*/]);
    Card::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"Count"*/]);
    Card::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Items"*/]);
    Card::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"pageScaling"*/]);
    Card::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"swipe"*/]);
    Card::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"topPanel"*/]);
    Card::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"topPanelRect"*/]);
    Card::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"bottomPanel"*/]);
    Card::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"bottomPanel...*/]);
}

static void Card_build(uType* type)
{
    ::STRINGS[0] = uString::Const("pageScaling");
    ::STRINGS[1] = uString::Const("swipe");
    ::STRINGS[2] = uString::Const("topPanel");
    ::STRINGS[3] = uString::Const("topPanelRect");
    ::STRINGS[4] = uString::Const("bottomPanel");
    ::STRINGS[5] = uString::Const("bottomPanelScaling");
    ::STRINGS[6] = uString::Const("Opacity");
    ::STRINGS[7] = uString::Const("Factor");
    ::STRINGS[8] = uString::Const("X");
    ::STRINGS[9] = uString::Const("Y");
    ::STRINGS[10] = uString::Const("Value");
    ::STRINGS[11] = uString::Const("File");
    ::STRINGS[12] = uString::Const("Count");
    ::STRINGS[13] = uString::Const("Items");
    ::STRINGS[14] = uString::Const("item");
    ::STRINGS[15] = uString::Const("name");
    ::STRINGS[16] = uString::Const("lat");
    ::STRINGS[17] = uString::Const("long");
    ::STRINGS[18] = uString::Const("image");
    ::STRINGS[19] = uString::Const("location");
    ::STRINGS[20] = uString::Const("no");
    ::STRINGS[21] = uString::Const("stars");
    ::STRINGS[22] = uString::Const("starsRest");
    ::STRINGS[23] = uString::Const("people");
    ::STRINGS[24] = uString::Const("20,20,1*");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(110,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Card, __g_nametable1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::Card, bottomPanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::Card, bottomPanel_Opacity_inst), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::Card, bottomPanelScaling), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::Card, bottomPanelScaling_X_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::Card, bottomPanelScaling_Y_inst), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::Card, pageScaling), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::Card, pageScaling_Factor_inst), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Card, swipe), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Card, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Card, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Card, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(::g::Card, temp3_File_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Card, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::Card, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(::g::Card, temp6_Count_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(::g::Card, temp7_Count_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::Card, temp8_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::Card, this_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::Card, topPanel), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::Card, topPanelRect), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::Card::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Card::__selector9_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Card__New4_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Panel_type* Card_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 146;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(Card);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Card", options);
    type->fp_build_ = Card_build;
    type->fp_ctor_ = (void*)Card__New4_fn;
    type->fp_cctor_ = Card__cctor_4_fn;
    type->interface16.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface16.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface16.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface11.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface13.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface12.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface15.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface14.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface14.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface14.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface14.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface9.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface9.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface9.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface9.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Card() :124
void Card__ctor_7_fn(Card* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :128
void Card__InitializeUX_fn(Card* __this)
{
    __this->InitializeUX();
}

// public Card New() :124
void Card__New4_fn(Card** __retval)
{
    *__retval = Card::New4();
}

uSStrong<uArray*> Card::__g_static_nametable1_;
::g::Uno::UX::Selector Card::__selector0_;
::g::Uno::UX::Selector Card::__selector1_;
::g::Uno::UX::Selector Card::__selector10_;
::g::Uno::UX::Selector Card::__selector11_;
::g::Uno::UX::Selector Card::__selector12_;
::g::Uno::UX::Selector Card::__selector13_;
::g::Uno::UX::Selector Card::__selector2_;
::g::Uno::UX::Selector Card::__selector3_;
::g::Uno::UX::Selector Card::__selector4_;
::g::Uno::UX::Selector Card::__selector5_;
::g::Uno::UX::Selector Card::__selector6_;
::g::Uno::UX::Selector Card::__selector7_;
::g::Uno::UX::Selector Card::__selector8_;
::g::Uno::UX::Selector Card::__selector9_;

// public Card() [instance] :124
void Card::ctor_7()
{
    uStackFrame __("Card", ".ctor()");
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :128
void Card::InitializeUX()
{
    uStackFrame __("Card", "InitializeUX()");
    this_Opacity_inst = ::g::stardy_FuseElementsElement_Opacity_Property::New1(this, Card::__selector0());
    pageScaling = ::g::Fuse::Scaling::New2();
    pageScaling_Factor_inst = ::g::stardy_FuseScaling_Factor_Property::New1(pageScaling, Card::__selector1());
    swipe = ::g::Fuse::Gestures::SwipeGesture::New2();
    bottomPanelScaling = ::g::Fuse::Scaling::New2();
    bottomPanelScaling_X_inst = ::g::stardy_FuseScaling_X_Property::New1(bottomPanelScaling, Card::__selector2());
    bottomPanelScaling_Y_inst = ::g::stardy_FuseScaling_Y_Property::New1(bottomPanelScaling, Card::__selector3());
    bottomPanel = ::g::Fuse::Controls::Panel::New3();
    bottomPanel_Opacity_inst = ::g::stardy_FuseElementsElement_Opacity_Property::New1(bottomPanel, Card::__selector0());
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"item"*/]);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::stardy_FuseControlsTextControl_Value_Property::New1(temp, Card::__selector4());
    ::g::Fuse::Reactive::Member* temp10 = ::g::Fuse::Reactive::Member::New1(temp9, ::STRINGS[15/*"name"*/]);
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Card::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"item"*/]);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::stardy_FuseControlsTextControl_Value_Property::New1(temp1, Card::__selector4());
    ::g::Fuse::Reactive::Member* temp12 = ::g::Fuse::Reactive::Member::New1(temp11, ::STRINGS[16/*"lat"*/]);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"item"*/]);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::stardy_FuseControlsTextControl_Value_Property::New1(temp2, Card::__selector4());
    ::g::Fuse::Reactive::Member* temp14 = ::g::Fuse::Reactive::Member::New1(temp13, ::STRINGS[17/*"long"*/]);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"item"*/]);
    ::g::Fuse::Drawing::ImageFill* temp3 = ::g::Fuse::Drawing::ImageFill::New2();
    temp3_File_inst = ::g::stardy_FuseDrawingImageFill_File_Property::New1(temp3, Card::__selector5());
    ::g::Fuse::Reactive::Member* temp16 = ::g::Fuse::Reactive::Member::New1(temp15, ::STRINGS[18/*"image"*/]);
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"item"*/]);
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    temp4_Value_inst = ::g::stardy_FuseControlsTextControl_Value_Property::New1(temp4, Card::__selector4());
    ::g::Fuse::Reactive::Member* temp18 = ::g::Fuse::Reactive::Member::New1(temp17, ::STRINGS[19/*"location"*/]);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"item"*/]);
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    temp5_Value_inst = ::g::stardy_FuseControlsTextControl_Value_Property::New1(temp5, Card::__selector4());
    ::g::Fuse::Reactive::Member* temp20 = ::g::Fuse::Reactive::Member::New1(temp19, ::STRINGS[20/*"no"*/]);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"item"*/]);
    ::g::Fuse::Reactive::Each* temp6 = ::g::Fuse::Reactive::Each::New4();
    temp6_Count_inst = ::g::stardy_FuseReactiveEach_Count_Property::New1(temp6, Card::__selector6());
    ::g::Fuse::Reactive::Member* temp22 = ::g::Fuse::Reactive::Member::New1(temp21, ::STRINGS[21/*"stars"*/]);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"item"*/]);
    ::g::Fuse::Reactive::Each* temp7 = ::g::Fuse::Reactive::Each::New4();
    temp7_Count_inst = ::g::stardy_FuseReactiveEach_Count_Property::New1(temp7, Card::__selector6());
    ::g::Fuse::Reactive::Member* temp24 = ::g::Fuse::Reactive::Member::New1(temp23, ::STRINGS[22/*"starsRest"*/]);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"item"*/]);
    ::g::Fuse::Reactive::Each* temp8 = ::g::Fuse::Reactive::Each::New4();
    temp8_Items_inst = ::g::stardy_FuseReactiveEach_Items_Property::New1(temp8, Card::__selector7());
    ::g::Fuse::Reactive::Member* temp26 = ::g::Fuse::Reactive::Member::New1(temp25, ::STRINGS[23/*"people"*/]);
    ::g::Fuse::Navigation::ActivatingAnimation* temp27 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp28 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Animations::Change* temp29 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], pageScaling_Factor_inst);
    ::g::Fuse::Navigation::EnteringAnimation* temp30 = ::g::Fuse::Navigation::EnteringAnimation::New2();
    ::g::Fuse::Animations::Move* temp31 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::ExitingAnimation* temp32 = ::g::Fuse::Navigation::ExitingAnimation::New2();
    ::g::Fuse::Animations::Move* temp33 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Gestures::SwipingAnimation* temp34 = ::g::Fuse::Gestures::SwipingAnimation::New2(swipe);
    ::g::Fuse::Animations::Move* temp35 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Change* temp36 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], bottomPanelScaling_X_inst);
    ::g::Fuse::Animations::Change* temp37 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], bottomPanelScaling_Y_inst);
    ::g::Fuse::Animations::Change* temp38 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], bottomPanel_Opacity_inst);
    ::g::Fuse::Navigation::WhileInactive* temp39 = ::g::Fuse::Navigation::WhileInactive::New2();
    ::g::Fuse::Gestures::SetSwipeActive* temp40 = ::g::Fuse::Gestures::SetSwipeActive::New2();
    topPanel = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp41 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::LinearGradient* temp42 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp43 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp44 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp45 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp46 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp47 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Controls::Shadow* temp48 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Reactive::DataBinding* temp49 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp10, __g_nametable1, 3);
    ::g::Fuse::Controls::Grid* temp50 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp12, __g_nametable1, 3);
    ::g::Fuse::Controls::Image* temp52 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp53 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp14, __g_nametable1, 3);
    topPanelRect = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Shadow* temp54 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp3_File_inst, (uObject*)temp16, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp56 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Shadow* temp57 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Controls::Grid* temp58 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp59 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp18, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp60 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp20, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp61 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp62 = ::g::Fuse::Controls::StackPanel::New4();
    Card__Template* temp63 = Card__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp64 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Count_inst, (uObject*)temp22, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp65 = ::g::Fuse::Controls::StackPanel::New4();
    Card__Template1* temp66 = Card__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp67 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Count_inst, (uObject*)temp24, __g_nametable1, 3);
    ::g::Fuse::Controls::Grid* temp68 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::StackPanel* temp69 = ::g::Fuse::Controls::StackPanel::New4();
    Card__Template2* temp70 = Card__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp71 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Items_inst, (uObject*)temp26, __g_nametable1, 3);
    ::g::Fuse::Controls::StackPanel* temp72 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Circle* temp73 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Controls::Circle* temp74 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Controls::Circle* temp75 = ::g::Fuse::Controls::Circle::New3();
    Opacity(0.4f);
    uPtr(pageScaling)->Factor(0.95f);
    uPtr(pageScaling)->Name(Card::__selector8());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp29);
    ::g::Fuse::Animations::Change__set_Value_fn(temp28, uCRef(1.0f));
    temp28->Duration(0.5);
    ::g::Fuse::Animations::Change__set_Value_fn(temp29, uCRef(1.0f));
    temp29->Duration(0.5);
    temp30->Scale(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp31);
    temp31->X(-1.4f);
    temp31->Duration(0.5);
    temp31->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp32->Scale(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp33);
    temp33->X(1.4f);
    temp33->Duration(0.5);
    temp33->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    uPtr(swipe)->Type(1);
    uPtr(swipe)->Direction(1);
    uPtr(swipe)->Name(Card::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp38);
    temp35->Y(-0.3f);
    temp35->Duration(0.5);
    temp35->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp35->Target(topPanel);
    ::g::Fuse::Animations::Change__set_Value_fn(temp36, uCRef(1.0f));
    temp36->Duration(0.5);
    ::g::Fuse::Animations::Change__set_Value_fn(temp37, uCRef(1.0f));
    temp37->Duration(0.5);
    ::g::Fuse::Animations::Change__set_Value_fn(temp38, uCRef(1.0f));
    temp38->Duration(0.5);
    temp39->Threshold(0.2f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp40);
    temp40->Value(false);
    temp40->Target(swipe);
    uPtr(topPanel)->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(topPanel)->Height(::g::Uno::UX::Size__New1(50.0f, 4));
    uPtr(topPanel)->Name(Card::__selector10());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), topPanelRect);
    temp41->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp41->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Fills()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp42);
    temp42->StartPoint(::g::Uno::Float2__New2(0.0f, 0.0f));
    temp42->EndPoint(::g::Uno::Float2__New2(0.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Stops()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Stops()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Stops()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Stops()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Stops()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp47);
    temp43->Offset(0.0f);
    temp43->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f));
    temp44->Offset(0.25f);
    temp44->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp45->Offset(0.7f);
    temp45->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp46->Offset(0.85f);
    temp46->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.4666667f));
    temp47->Offset(1.0f);
    temp47->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.4666667f));
    temp->FontSize(24.0f);
    temp->Color(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    temp->Alignment(2);
    temp->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp49);
    temp48->Mode(1);
    temp50->ColumnCount(3);
    temp50->Alignment(12);
    temp50->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp1->FontSize(10.0f);
    temp1->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp51);
    temp52->Width(::g::Uno::UX::Size__New1(13.0f, 1));
    temp52->Height(::g::Uno::UX::Size__New1(13.0f, 1));
    temp52->File(::g::Uno::UX::BundleFileSource::New1(::g::stardy_bundle::location653f44ec()));
    temp2->FontSize(10.0f);
    temp2->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp53);
    uPtr(topPanelRect)->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(topPanelRect)->Layer(1);
    uPtr(topPanelRect)->Name(Card::__selector11());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanelRect)->Fills()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanelRect)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topPanelRect)->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    temp3->WrapMode(1);
    temp3->StretchMode(6);
    uPtr(bottomPanel)->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    uPtr(bottomPanel)->Height(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(bottomPanel)->Opacity(0.0f);
    uPtr(bottomPanel)->Name(Card::__selector12());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bottomPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bottomPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomPanelScaling);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bottomPanel)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    temp56->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp56->Color(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    temp56->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    uPtr(bottomPanelScaling)->X(0.85f);
    uPtr(bottomPanelScaling)->Y(0.8f);
    uPtr(bottomPanelScaling)->Name(Card::__selector13());
    temp58->Rows(::STRINGS[24/*"20,20,1*"*/]);
    temp58->ColumnCount(2);
    temp58->Height(::g::Uno::UX::Size__New1(30.0f, 4));
    temp58->Alignment(12);
    temp58->Padding(::g::Uno::Float4__New2(20.0f, 10.0f, 20.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    temp4->FontSize(14.0f);
    temp4->Color(::g::Uno::Float4__New2(0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp4, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp4, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp4, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp59);
    temp5->FontSize(14.0f);
    temp5->Color(::g::Uno::Float4__New2(0.2666667f, 0.2666667f, 0.2666667f, 1.0f));
    temp5->Alignment(8);
    ::g::Fuse::Controls::Grid::SetRow(temp5, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp5, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp60);
    temp61->Orientation(0);
    temp61->Alignment(11);
    ::g::Fuse::Controls::Grid::SetRow(temp61, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp61, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    temp62->Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp64);
    temp65->Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp67);
    temp68->ColumnCount(2);
    ::g::Fuse::Controls::Grid::SetRow(temp68, 2);
    ::g::Fuse::Controls::Grid::SetColumn(temp68, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp68, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    temp69->Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Templates()), ::TYPES[8/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp71);
    temp72->ItemSpacing(2.0f);
    temp72->Alignment(11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    temp73->Color(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    temp73->Width(::g::Uno::UX::Size__New1(4.0f, 1));
    temp73->Height(::g::Uno::UX::Size__New1(4.0f, 1));
    temp74->Color(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    temp74->Width(::g::Uno::UX::Size__New1(4.0f, 1));
    temp74->Height(::g::Uno::UX::Size__New1(4.0f, 1));
    temp75->Color(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    temp75->Width(::g::Uno::UX::Size__New1(4.0f, 1));
    temp75->Height(::g::Uno::UX::Size__New1(4.0f, 1));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), pageScaling);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), swipe);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), topPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), topPanelRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), bottomPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), bottomPanelScaling);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), pageScaling);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), swipe);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), topPanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomPanel);
}

// public Card New() [static] :124
Card* Card::New4()
{
    Card* obj1 = (Card*)uNew(Card_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
