// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/build/Android/Preview/preamble/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Ge-6f9cb169.h>
#include <Outracks.Simulator.Ru-34926e08.h>
#include <Outracks.Simulator.Ru-63e55367.h>
#include <Outracks.Simulator.Ru-75e6bbf4.h>
#include <Outracks.Simulator.Ru-76e19a1e.h>
#include <Outracks.Simulator.Ru-9f19b016.h>
#include <Uno.Int.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.String.h>
static uString* STRINGS[4];
static uType* TYPES[2];

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class GeneratedApplication :10
// {
static void GeneratedApplication_build(uType* type)
{
    ::STRINGS[0] = uString::Const("127.0.0.1");
    ::STRINGS[1] = uString::Const("192.168.0.3");
    ::STRINGS[2] = uString::Const("/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/\341\204\216\341\205\241\341\206\274\341\204\213\341\205\264\341\204\214\341\205\245\341\206\250\341\204\220\341\205\251\341\206\274\341\204\222\341\205\241\341\206\270\341\204\211\341\205\245\341\206\257\341\204\200\341\205\2501/Stardy/stardy.unoproj");
    ::STRINGS[3] = uString::Const("stardy");
    ::TYPES[0] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Outracks::Simulator::Client::Application_type, interface0),
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(::g::Outracks::Simulator::Client::Application_type, interface1));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GeneratedApplication__New2_fn, 0, true, type, 0));
}

::g::Outracks::Simulator::Client::Application_type* GeneratedApplication_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::Application_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::Application_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GeneratedApplication);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::Application_type);
    type = (::g::Outracks::Simulator::Client::Application_type*)uClassType::New("Outracks.Simulator.GeneratedApplication", options);
    type->fp_build_ = GeneratedApplication_build;
    type->fp_ctor_ = (void*)GeneratedApplication__New2_fn;
    type->interface1.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))::g::Outracks::Simulator::Client::Application__OnPointerPressed_fn;
    type->interface1.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))::g::Outracks::Simulator::Client::Application__OnPointerMoved_fn;
    type->interface1.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))::g::Outracks::Simulator::Client::Application__OnPointerReleased_fn;
    type->interface1.fp_OnPointerWheelMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*))::g::Outracks::Simulator::Client::Application__OnPointerWheelMoved_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public GeneratedApplication() :12
void GeneratedApplication__ctor_5_fn(GeneratedApplication* __this)
{
    __this->ctor_5();
}

// public GeneratedApplication New() :12
void GeneratedApplication__New2_fn(GeneratedApplication** __retval)
{
    *__retval = GeneratedApplication::New2();
}

// public GeneratedApplication() [instance] :12
void GeneratedApplication::ctor_5()
{
    uStackFrame __("Outracks.Simulator.GeneratedApplication", ".ctor()");
    ctor_4(uArray::Init< ::g::Uno::Net::IPEndPoint*>(::TYPES[0/*Uno.Net.IPEndPoint[]*/], 2, (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[0/*"127.0.0.1"*/]), 12124), (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[1/*"192.168.0.3"*/]), 12124)), ::STRINGS[2/*"/Users/mac/...*/], uArray::Init<uString*>(::TYPES[1/*string[]*/], 0));
    ::g::Outracks::Simulator::Runtime::Bundle::Initialize(::STRINGS[3/*"stardy"*/]);
    Reflection((uObject*)::g::Outracks::Simulator::Runtime::NativeReflection::New1((uObject*)::g::Outracks::Simulator::Runtime::SimpleTypeMap::New1()));
}

// public GeneratedApplication New() [static] :12
GeneratedApplication* GeneratedApplication::New2()
{
    GeneratedApplication* obj1 = (GeneratedApplication*)uNew(GeneratedApplication_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}} // ::g::Outracks::Simulator
