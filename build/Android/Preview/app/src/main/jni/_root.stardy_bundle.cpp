// This file was generated based on '/Users/mac/Dropbox/[1 STORAGE]/2017-Fall/창의적통합설계1/Stardy/stardy.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.stardy_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[20];

namespace g{

// public static generated class stardy_bundle :0
// {
// static stardy_bundle() :0
static void stardy_bundle__cctor__fn(uType* __type)
{
    stardy_bundle::addlocation0d7af661_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[1/*"addlocation...*/]);
    stardy_bundle::AlegreyaSansBold9a310e58_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[2/*"alegreyasan...*/]);
    stardy_bundle::Browser1a65aed1_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[3/*"browser-029...*/]);
    stardy_bundle::Chat68d976ab_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[4/*"chat-54c91e...*/]);
    stardy_bundle::Comment5878a552_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[5/*"comment-c57...*/]);
    stardy_bundle::Feedac5bd5db_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[6/*"feed-60e77f...*/]);
    stardy_bundle::gps8a2fe439_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[7/*"gps-758302e...*/]);
    stardy_bundle::LatoBold9131665c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[8/*"lato-bold-5...*/]);
    stardy_bundle::LatoRegular7e7fa05b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[9/*"lato-regula...*/]);
    stardy_bundle::Like2abbea38_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[10/*"like-20c528...*/]);
    stardy_bundle::location653f44ec_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[11/*"location-eb...*/]);
    stardy_bundle::Locationab8048cc_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[12/*"location-dd...*/]);
    stardy_bundle::MainView7f626706_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[13/*"mainview-cb...*/]);
    stardy_bundle::persondef397aa_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[14/*"person-df2f...*/]);
    stardy_bundle::RobotoBold21217465_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[15/*"roboto-bold...*/]);
    stardy_bundle::search4198005f_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[16/*"search-8177...*/]);
    stardy_bundle::Share4fc2f574_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[17/*"share-c3ede...*/]);
    stardy_bundle::star57b438ad_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[18/*"star-2a3032...*/]);
    stardy_bundle::TimeLine6c08c309_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"stardy"*/]))->GetFile(::STRINGS[19/*"timeline-f8...*/]);
}

static void stardy_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("stardy");
    ::STRINGS[1] = uString::Const("addlocation-c5533e84.png");
    ::STRINGS[2] = uString::Const("alegreyasans-bold-5f46d3ef.otf");
    ::STRINGS[3] = uString::Const("browser-02938b34.png");
    ::STRINGS[4] = uString::Const("chat-54c91eb8.png");
    ::STRINGS[5] = uString::Const("comment-c577b533.png");
    ::STRINGS[6] = uString::Const("feed-60e77f26.png");
    ::STRINGS[7] = uString::Const("gps-758302ec.png");
    ::STRINGS[8] = uString::Const("lato-bold-585fc8b5.ttf");
    ::STRINGS[9] = uString::Const("lato-regular-5dfd7c88.ttf");
    ::STRINGS[10] = uString::Const("like-20c528cf.png");
    ::STRINGS[11] = uString::Const("location-eb916c55.png");
    ::STRINGS[12] = uString::Const("location-dd454eb5.png");
    ::STRINGS[13] = uString::Const("mainview-cb8c4a65.js");
    ::STRINGS[14] = uString::Const("person-df2fc099.png");
    ::STRINGS[15] = uString::Const("roboto-bold-99dc3c1a.ttf");
    ::STRINGS[16] = uString::Const("search-8177193a.png");
    ::STRINGS[17] = uString::Const("share-c3edee7d.png");
    ::STRINGS[18] = uString::Const("star-2a303222.png");
    ::STRINGS[19] = uString::Const("timeline-f8d8a92e.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::addlocation0d7af661_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::AlegreyaSansBold9a310e58_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::Browser1a65aed1_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::Chat68d976ab_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::Comment5878a552_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::Feedac5bd5db_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::gps8a2fe439_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::LatoBold9131665c_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::LatoRegular7e7fa05b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::Like2abbea38_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::location653f44ec_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::Locationab8048cc_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::MainView7f626706_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::persondef397aa_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::RobotoBold21217465_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::search4198005f_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::Share4fc2f574_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::star57b438ad_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::stardy_bundle::TimeLine6c08c309_, uFieldFlagsStatic);
    type->Reflection.SetFields(19,
        new uField("addlocation0d7af661", 0),
        new uField("AlegreyaSansBold9a310e58", 1),
        new uField("Browser1a65aed1", 2),
        new uField("Chat68d976ab", 3),
        new uField("Comment5878a552", 4),
        new uField("Feedac5bd5db", 5),
        new uField("gps8a2fe439", 6),
        new uField("LatoBold9131665c", 7),
        new uField("LatoRegular7e7fa05b", 8),
        new uField("Like2abbea38", 9),
        new uField("location653f44ec", 10),
        new uField("Locationab8048cc", 11),
        new uField("MainView7f626706", 12),
        new uField("persondef397aa", 13),
        new uField("RobotoBold21217465", 14),
        new uField("search4198005f", 15),
        new uField("Share4fc2f574", 16),
        new uField("star57b438ad", 17),
        new uField("TimeLine6c08c309", 18));
}

uClassType* stardy_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("stardy_bundle", options);
    type->fp_build_ = stardy_bundle_build;
    type->fp_cctor_ = stardy_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::addlocation0d7af661_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::AlegreyaSansBold9a310e58_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::Browser1a65aed1_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::Chat68d976ab_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::Comment5878a552_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::Feedac5bd5db_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::gps8a2fe439_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::LatoBold9131665c_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::LatoRegular7e7fa05b_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::Like2abbea38_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::location653f44ec_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::Locationab8048cc_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::MainView7f626706_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::persondef397aa_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::RobotoBold21217465_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::search4198005f_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::Share4fc2f574_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::star57b438ad_;
uSStrong< ::g::Uno::IO::BundleFile*> stardy_bundle::TimeLine6c08c309_;
// }

} // ::g
