// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/cache/ux11/TimeLine.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Sidebar.h>
#include <_root.stardy_bundle.h>
#include <_root.stardy_FuseElem-48499a0c.h>
#include <_root.stardy_FuseElem-d9f8361.h>
#include <_root.stardy_FuseReac-95e4a071.h>
#include <_root.stardy_FuseRota-42d1b8ec.h>
#include <_root.stardy_FuseTran-d331206c.h>
#include <_root.stardy_FuseTran-ed828151.h>
#include <_root.stardy_FuseTrig-8881d180.h>
#include <_root.TimeLine.h>
#include <_root.TimeLine.Template.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.BottomF-14cf09.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.EdgeNavigator.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Activ-5bc1c951.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.NavigateTo.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.Rotation.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions-d8fdd070.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
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
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[31];
static uType* TYPES[11];

namespace g{

// public partial sealed class TimeLine :2
// {
// static TimeLine() :65
static void TimeLine__cctor_4_fn(uType* __type)
{
    TimeLine::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"EdgeNavigator"*/], ::STRINGS[2/*"menu"*/], ::STRINGS[3/*"temp_eb1"*/], ::STRINGS[4/*"temp_eb2"*/], ::STRINGS[5/*"content"*/], ::STRINGS[6/*"mainAppTran...*/], ::STRINGS[7/*"topRectangle"*/], ::STRINGS[8/*"topMenuTran...*/], ::STRINGS[9/*"topMenuRota...*/], ::STRINGS[10/*"middleRecta...*/], ::STRINGS[11/*"bottomRecta...*/], ::STRINGS[12/*"bottomMenuT...*/], ::STRINGS[13/*"bottomMenuR...*/]);
    TimeLine::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"X"*/]);
    TimeLine::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"Y"*/]);
    TimeLine::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Opacity"*/]);
    TimeLine::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"Degrees"*/]);
    TimeLine::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"Width"*/]);
    TimeLine::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"Value"*/]);
    TimeLine::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"Items"*/]);
    TimeLine::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"EdgeNavigator"*/]);
    TimeLine::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"menu"*/]);
    TimeLine::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"content"*/]);
    TimeLine::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"mainAppTran...*/]);
    TimeLine::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"topRectangle"*/]);
    TimeLine::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"topMenuTran...*/]);
    TimeLine::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"topMenuRota...*/]);
    TimeLine::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"middleRecta...*/]);
    TimeLine::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"bottomRecta...*/]);
    TimeLine::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"bottomMenuT...*/]);
    TimeLine::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"bottomMenuR...*/]);
}

static void TimeLine_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("EdgeNavigator");
    ::STRINGS[2] = uString::Const("menu");
    ::STRINGS[3] = uString::Const("temp_eb1");
    ::STRINGS[4] = uString::Const("temp_eb2");
    ::STRINGS[5] = uString::Const("content");
    ::STRINGS[6] = uString::Const("mainAppTranslation");
    ::STRINGS[7] = uString::Const("topRectangle");
    ::STRINGS[8] = uString::Const("topMenuTranslation");
    ::STRINGS[9] = uString::Const("topMenuRotation");
    ::STRINGS[10] = uString::Const("middleRectangle");
    ::STRINGS[11] = uString::Const("bottomRectangle");
    ::STRINGS[12] = uString::Const("bottomMenuTranslation");
    ::STRINGS[13] = uString::Const("bottomMenuRotation");
    ::STRINGS[14] = uString::Const("X");
    ::STRINGS[15] = uString::Const("Y");
    ::STRINGS[16] = uString::Const("Opacity");
    ::STRINGS[17] = uString::Const("Degrees");
    ::STRINGS[18] = uString::Const("Width");
    ::STRINGS[19] = uString::Const("Value");
    ::STRINGS[20] = uString::Const("Items");
    ::STRINGS[21] = uString::Const("setSidebarOpen");
    ::STRINGS[22] = uString::Const("setSidebarClosed");
    ::STRINGS[23] = uString::Const("sidebarOpen");
    ::STRINGS[24] = uString::Const("data");
    ::STRINGS[25] = uString::Const("responseData");
    ::STRINGS[26] = uString::Const("TimeLine.ux");
    ::STRINGS[27] = uString::Const("\n"
        "\t\t\tvar Observable = require(\"FuseJS/Observable\");\n"
        "\n"
        "\t\t\tvar sidebarOpen = Observable(false);\n"
        "\t\t\tfunction setSidebarOpen() {\n"
        "\t\t\t\tsidebarOpen.value = true;\n"
        "\t\t\t};\n"
        "\t\t\tfunction setSidebarClosed() {\n"
        "\t\t\t\tsidebarOpen.value = false;\n"
        "\t\t\t};\n"
        "\n"
        "\t\t\tvar data = Observable();\n"
        "\n"
        "\t\t\tfetch('http://az664292.vo.msecnd.net/files/P6FteBeij9A7jTXL-edgenavresponse.json')\n"
        "\t\t\t.then(function(response) { return response.json(); })\n"
        "\t\t\t.then(function(responseObject) { data.value = responseObject; });\n"
        "\n"
        "\t\t\tmodule.exports = {\n"
        "\t\t\t\tdata: data,\n"
        "\t\t\t\tsidebarOpen: sidebarOpen,\n"
        "\t\t\t\tsetSidebarOpen: setSidebarOpen,\n"
        "\t\t\t\tsetSidebarClosed: setSidebarClosed\n"
        "\t\t\t};\n"
        "\t\t");
    ::STRINGS[28] = uString::Const("auto,1*,auto");
    ::STRINGS[29] = uString::Const("NEWS");
    ::STRINGS[30] = uString::Const("Search clicked");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(116,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::TimeLine, __g_nametable1), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::TimeLine, bottomMenuRotation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::TimeLine, bottomMenuRotation_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::TimeLine, bottomMenuTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::TimeLine, bottomMenuTranslation_Y_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::TimeLine, bottomRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(::g::TimeLine, bottomRectangle_Width_inst), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(::g::TimeLine, content), 0,
        ::g::Fuse::Controls::EdgeNavigator_typeof(), offsetof(::g::TimeLine, EdgeNavigator), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::TimeLine, mainAppTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::TimeLine, mainAppTranslation_X_inst), 0,
        ::g::Sidebar_typeof(), offsetof(::g::TimeLine, menu), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::TimeLine, middleRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::TimeLine, middleRectangle_Opacity_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::TimeLine, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::TimeLine, temp_eb1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::TimeLine, temp_eb2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::TimeLine, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::TimeLine, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::TimeLine, temp2_Items_inst), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::TimeLine, topMenuRotation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::TimeLine, topMenuRotation_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::TimeLine, topMenuTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::TimeLine, topMenuTranslation_Y_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::TimeLine, topRectangle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(::g::TimeLine, topRectangle_Width_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::TimeLine::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TimeLine::__selector9_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TimeLine__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* TimeLine_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 161;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(TimeLine);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("TimeLine", options);
    type->fp_build_ = TimeLine_build;
    type->fp_cctor_ = TimeLine__cctor_4_fn;
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

// public TimeLine(Fuse.Navigation.Router router) :69
void TimeLine__ctor_8_fn(TimeLine* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :75
void TimeLine__InitializeUX_fn(TimeLine* __this)
{
    __this->InitializeUX();
}

// public TimeLine New(Fuse.Navigation.Router router) :69
void TimeLine__New5_fn(::g::Fuse::Navigation::Router* router1, TimeLine** __retval)
{
    *__retval = TimeLine::New5(router1);
}

uSStrong<uArray*> TimeLine::__g_static_nametable1_;
::g::Uno::UX::Selector TimeLine::__selector0_;
::g::Uno::UX::Selector TimeLine::__selector1_;
::g::Uno::UX::Selector TimeLine::__selector10_;
::g::Uno::UX::Selector TimeLine::__selector11_;
::g::Uno::UX::Selector TimeLine::__selector12_;
::g::Uno::UX::Selector TimeLine::__selector13_;
::g::Uno::UX::Selector TimeLine::__selector14_;
::g::Uno::UX::Selector TimeLine::__selector15_;
::g::Uno::UX::Selector TimeLine::__selector16_;
::g::Uno::UX::Selector TimeLine::__selector17_;
::g::Uno::UX::Selector TimeLine::__selector2_;
::g::Uno::UX::Selector TimeLine::__selector3_;
::g::Uno::UX::Selector TimeLine::__selector4_;
::g::Uno::UX::Selector TimeLine::__selector5_;
::g::Uno::UX::Selector TimeLine::__selector6_;
::g::Uno::UX::Selector TimeLine::__selector7_;
::g::Uno::UX::Selector TimeLine::__selector8_;
::g::Uno::UX::Selector TimeLine::__selector9_;

// public TimeLine(Fuse.Navigation.Router router) [instance] :69
void TimeLine::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("TimeLine", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :75
void TimeLine::InitializeUX()
{
    uStackFrame __("TimeLine", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, TimeLine::__g_static_nametable1());
    mainAppTranslation = ::g::Fuse::Translation::New2();
    mainAppTranslation_X_inst = ::g::stardy_FuseTranslation_X_Property::New1(mainAppTranslation, TimeLine::__selector0());
    topMenuTranslation = ::g::Fuse::Translation::New2();
    topMenuTranslation_Y_inst = ::g::stardy_FuseTranslation_Y_Property::New1(topMenuTranslation, TimeLine::__selector1());
    bottomMenuTranslation = ::g::Fuse::Translation::New2();
    bottomMenuTranslation_Y_inst = ::g::stardy_FuseTranslation_Y_Property::New1(bottomMenuTranslation, TimeLine::__selector1());
    middleRectangle = ::g::Fuse::Controls::Rectangle::New3();
    middleRectangle_Opacity_inst = ::g::stardy_FuseElementsElement_Opacity_Property::New1(middleRectangle, TimeLine::__selector2());
    topMenuRotation = ::g::Fuse::Rotation::New2();
    topMenuRotation_Degrees_inst = ::g::stardy_FuseRotation_Degrees_Property::New1(topMenuRotation, TimeLine::__selector3());
    bottomMenuRotation = ::g::Fuse::Rotation::New2();
    bottomMenuRotation_Degrees_inst = ::g::stardy_FuseRotation_Degrees_Property::New1(bottomMenuRotation, TimeLine::__selector3());
    topRectangle = ::g::Fuse::Controls::Rectangle::New3();
    topRectangle_Width_inst = ::g::stardy_FuseElementsElement_Width_Property::New1(topRectangle, TimeLine::__selector4());
    bottomRectangle = ::g::Fuse::Controls::Rectangle::New3();
    bottomRectangle_Width_inst = ::g::stardy_FuseElementsElement_Width_Property::New1(bottomRectangle, TimeLine::__selector4());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"setSidebarO...*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"setSidebarC...*/]);
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::stardy_FuseTriggersWhileBool_Value_Property::New1(temp, TimeLine::__selector5());
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"sidebarOpen"*/]);
    ::g::Fuse::Triggers::WhileFalse* temp1 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp1_Value_inst = ::g::stardy_FuseTriggersWhileBool_Value_Property::New1(temp1, TimeLine::__selector5());
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"sidebarOpen"*/]);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"data"*/]);
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::stardy_FuseReactiveEach_Items_Property::New1(temp2, TimeLine::__selector6());
    ::g::Fuse::Reactive::Member* temp8 = ::g::Fuse::Reactive::Member::New1(temp7, ::STRINGS[25/*"responseData"*/]);
    ::g::Fuse::Reactive::JavaScript* temp9 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    EdgeNavigator = ::g::Fuse::Controls::EdgeNavigator::New4();
    ::g::Fuse::Reactive::JavaScript* temp10 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    menu = ::g::Sidebar::New5();
    ::g::Fuse::Navigation::ActivatingAnimation* temp11 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp12 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], mainAppTranslation_X_inst);
    ::g::Fuse::Animations::Change* temp13 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], topMenuTranslation_Y_inst);
    ::g::Fuse::Animations::Change* temp14 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], bottomMenuTranslation_Y_inst);
    ::g::Fuse::Animations::Change* temp15 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], middleRectangle_Opacity_inst);
    ::g::Fuse::Animations::Change* temp16 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], topMenuRotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp17 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], bottomMenuRotation_Degrees_inst);
    ::g::Fuse::Animations::Change* temp18 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Uno.UX.Size>*/], topRectangle_Width_inst);
    ::g::Fuse::Animations::Change* temp19 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<Uno.UX.Size>*/], bottomRectangle_Width_inst);
    ::g::Fuse::Navigation::WhileActive* temp20 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp21 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3, __g_nametable1);
    ::g::Fuse::Navigation::WhileInactive* temp22 = ::g::Fuse::Navigation::WhileInactive::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp23 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4, __g_nametable1);
    content = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp24 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomFrameBackground* temp25 = ::g::Fuse::Controls::BottomFrameBackground::New2();
    ::g::Fuse::Controls::StackPanel* temp26 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp27 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp28 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::Clicked* temp29 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateTo* temp30 = ::g::Fuse::Navigation::NavigateTo::New2();
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Fuse::Gestures::Clicked* temp32 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateTo* temp33 = ::g::Fuse::Navigation::NavigateTo::New2();
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp6, __g_nametable1, 3);
    ::g::Fuse::Controls::Text* temp35 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Font* temp36 = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::stardy_bundle::AlegreyaSansBold9a310e58()));
    ::g::Fuse::Controls::Panel* temp37 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Gestures::Clicked* temp38 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::DebugAction* temp39 = ::g::Fuse::Triggers::Actions::DebugAction::New2();
    ::g::Fuse::Controls::Circle* temp40 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::Stroke* temp41 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp42 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp43 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Translation* temp44 = ::g::Fuse::Translation::New2();
    ::g::Fuse::Rotation* temp45 = ::g::Fuse::Rotation::New2();
    ::g::Fuse::Controls::Rectangle* temp46 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::ScrollView* temp47 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp48 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp49 = ::g::Fuse::Controls::Panel::New3();
    TimeLine__Template* temp50 = TimeLine__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp8, __g_nametable1, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp52 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp9->LineNumber(3);
    temp9->FileName(::STRINGS[26/*"TimeLine.ux"*/]);
    temp9->File(::g::Uno::UX::BundleFileSource::New1(::g::stardy_bundle::TimeLine6c08c309()));
    uPtr(EdgeNavigator)->Name(TimeLine::__selector7());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(EdgeNavigator)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(EdgeNavigator)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(EdgeNavigator)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), content);
    temp10->Code(::STRINGS[27/*"\n\t\t\tvar...*/]);
    temp10->LineNumber(5);
    temp10->FileName(::STRINGS[26/*"TimeLine.ux"*/]);
    uPtr(menu)->Width(::g::Uno::UX::Size__New1(180.0f, 1));
    uPtr(menu)->Name(TimeLine::__selector8());
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(menu, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menu)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    ::g::Fuse::Animations::Change__set_Value_fn(temp12, uCRef(180.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp13, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp14, uCRef(0.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp15, uCRef(0.0f));
    temp15->Easing(::g::Fuse::Animations::Easing::CircularOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp16, uCRef(45.0f));
    temp16->Easing(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp17, uCRef(-45.0f));
    temp17->Easing(::g::Fuse::Animations::Easing::ExponentialIn());
    ::g::Fuse::Animations::Change__set_Value_fn(temp18, uCRef(::g::Uno::UX::Size__New1(28.0f, 1)));
    ::g::Fuse::Animations::Change__set_Value_fn(temp19, uCRef(::g::Uno::UX::Size__New1(28.0f, 1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp21->add_Handler(uDelegate::New(::TYPES[7/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp23->add_Handler(uDelegate::New(::TYPES[7/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    uPtr(content)->Name(TimeLine::__selector9());
    uPtr(content)->Background(temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), mainAppTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(content)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    uPtr(mainAppTranslation)->Name(TimeLine::__selector10());
    ::g::Fuse::Controls::DockPanel::SetDock(temp24, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp25, 3);
    ::g::Fuse::Controls::DockPanel::SetDock(temp26, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    temp27->Columns(::STRINGS[28/*"auto,1*,auto"*/]);
    temp27->Background(::g::Fuse::Drawing::Brushes::White());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    temp28->HitTestMode(2);
    temp28->Width(::g::Uno::UX::Size__New1(32.0f, 1));
    temp28->Height(::g::Uno::UX::Size__New1(32.0f, 1));
    temp28->Margin(::g::Uno::Float4__New2(7.0f, 5.0f, 5.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), topRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), middleRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp30);
    temp30->Target(content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Nodes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp33);
    temp33->Target(menu);
    uPtr(topRectangle)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(topRectangle)->Width(::g::Uno::UX::Size__New1(26.0f, 1));
    uPtr(topRectangle)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(topRectangle)->Name(TimeLine::__selector11());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topRectangle)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), topMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(topRectangle)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), topMenuRotation);
    uPtr(topMenuTranslation)->Y(-9.0f);
    uPtr(topMenuTranslation)->Name(TimeLine::__selector12());
    uPtr(topMenuRotation)->Name(TimeLine::__selector13());
    uPtr(middleRectangle)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(middleRectangle)->Width(::g::Uno::UX::Size__New1(26.0f, 1));
    uPtr(middleRectangle)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(middleRectangle)->Name(TimeLine::__selector14());
    uPtr(bottomRectangle)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(bottomRectangle)->Width(::g::Uno::UX::Size__New1(26.0f, 1));
    uPtr(bottomRectangle)->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    uPtr(bottomRectangle)->Name(TimeLine::__selector15());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bottomRectangle)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(bottomRectangle)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomMenuRotation);
    uPtr(bottomMenuTranslation)->Y(9.0f);
    uPtr(bottomMenuTranslation)->Name(TimeLine::__selector16());
    uPtr(bottomMenuRotation)->Name(TimeLine::__selector17());
    temp35->Value(::STRINGS[29/*"NEWS"*/]);
    temp35->FontSize(22.0f);
    temp35->TextAlignment(1);
    temp35->Alignment(8);
    temp35->Padding(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp35->Font(temp36);
    temp37->HitTestMode(2);
    temp37->Width(::g::Uno::UX::Size__New1(32.0f, 1));
    temp37->Height(::g::Uno::UX::Size__New1(32.0f, 1));
    temp37->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 7.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp39);
    temp39->Message(::STRINGS[30/*"Search clic...*/]);
    temp40->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp40->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Strokes()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp41);
    temp41->Width(2.0f);
    temp41->Brush(temp42);
    temp43->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp43->Width(::g::Uno::UX::Size__New1(7.0f, 1));
    temp43->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    temp44->X(8.0f);
    temp44->Y(8.0f);
    temp45->Degrees(45.0f);
    temp46->Color(::g::Uno::Float4__New2(0.2f, 0.2352941f, 0.282353f, 1.0f));
    temp46->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp46->Margin(::g::Uno::Float4__New2(0.0f, 5.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    temp48->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp49->Height(::g::Uno::UX::Size__New1(7.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[9/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp51);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), EdgeNavigator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), content);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), mainAppTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), topRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), topMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), topMenuRotation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), middleRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), bottomRectangle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), bottomMenuTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[10/*Uno.Collections.ICollection<object>*/]), bottomMenuRotation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), EdgeNavigator);
}

// public TimeLine New(Fuse.Navigation.Router router) [static] :69
TimeLine* TimeLine::New5(::g::Fuse::Navigation::Router* router1)
{
    TimeLine* obj1 = (TimeLine*)uNew(TimeLine_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
