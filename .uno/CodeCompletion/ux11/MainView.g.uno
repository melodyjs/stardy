[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Card();
            return __self;
        }
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb0"
    };
    static MainView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MainView(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Reactive.Data("timelineClicked");
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new stardy_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("pagesView");
        var temp3 = new global::Fuse.iOS.StatusBarConfig();
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Drawing.LinearGradient();
        var temp6 = new global::Fuse.Drawing.GradientStop();
        var temp7 = new global::Fuse.Drawing.GradientStop();
        var temp8 = new global::Fuse.Controls.Grid();
        var temp9 = new global::Fuse.Controls.Image();
        var temp10 = new global::Fuse.Controls.Text();
        var temp11 = new global::Fuse.Controls.Image();
        var temp12 = new global::Fuse.Controls.Grid();
        var temp13 = new global::Fuse.Controls.Image();
        var temp14 = new global::Fuse.Controls.Image();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp1, __g_nametable);
        var temp15 = new global::Fuse.Controls.Image();
        var temp16 = new global::Fuse.Controls.Panel();
        var temp17 = new global::Fuse.Controls.PageControl();
        var temp18 = new global::Fuse.Motion.NavigationMotion();
        var temp19 = new Template(this, this);
        var temp20 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
        temp3.Style = Fuse.Platform.StatusBarStyle.Light;
        temp4.LineNumber = 5;
        temp4.FileName = "MainView.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../MainView.js"));
        temp5.StartPoint = float2(0f, 0f);
        temp5.EndPoint = float2(0f, 1f);
        temp5.Stops.Add(temp6);
        temp5.Stops.Add(temp7);
        temp6.Offset = 0f;
        temp6.Color = float4(0.8078431f, 0.8392157f, 0.8705882f, 1f);
        temp7.Offset = 1f;
        temp7.Color = float4(0.5764706f, 0.6784314f, 0.7411765f, 1f);
        temp8.ColumnCount = 3;
        temp8.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp8.Alignment = Fuse.Elements.Alignment.Top;
        temp8.Margin = float4(20f, 20f, 20f, 20f);
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp10);
        temp8.Children.Add(temp11);
        temp9.Alignment = Fuse.Elements.Alignment.Left;
        temp9.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Icons/search.png"));
        temp10.Value = "내 스터디 목록";
        temp10.FontSize = 14f;
        temp10.Color = float4(1f, 1f, 1f, 1f);
        temp10.Alignment = Fuse.Elements.Alignment.Center;
        temp11.Alignment = Fuse.Elements.Alignment.Right;
        temp11.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Icons/gps.png"));
        temp12.ColumnCount = 3;
        temp12.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp12.Alignment = Fuse.Elements.Alignment.Bottom;
        temp12.Margin = float4(20f, 20f, 20f, 20f);
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp14);
        temp12.Children.Add(temp15);
        temp13.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Icons/addlocation.png"));
        global::Fuse.Gestures.Clicked.AddHandler(temp14, temp_eb0.OnEvent);
        temp14.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Icons/location.png"));
        temp14.Bindings.Add(temp_eb0);
        temp15.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Icons/person.png"));
        temp16.Children.Add(temp17);
        temp17.InactiveState = Fuse.Controls.NavigationControlInactiveState.Unchanged;
        temp17.Transition = Fuse.Controls.NavigationControlTransition.None;
        temp17.Motion = temp18;
        temp17.Children.Add(temp);
        temp18.GotoDuration = 0.3f;
        temp18.GotoEasing = Fuse.Animations.Easing.QuadraticOut;
        temp.Templates.Add(temp19);
        temp.Bindings.Add(temp20);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb0);
        this.Background = temp5;
        this.Children.Add(temp3);
        this.Children.Add(temp4);
        this.Children.Add(temp8);
        this.Children.Add(temp12);
        this.Children.Add(temp16);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
}
