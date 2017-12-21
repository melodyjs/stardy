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
            var __self = new global::CardMain();
            return __self;
        }
    }
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    internal global::Fuse.Controls.Grid upperGrid;
    internal global::Fuse.Controls.Grid lowerGrid;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "upperGrid",
        "lowerGrid"
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
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new stardy_FuseTriggersWhileBool_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("cardOpen");
        var temp1 = new global::Fuse.Triggers.WhileTrue();
        temp1_Value_inst = new stardy_FuseTriggersWhileBool_Value_Property(temp1, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("cardOpen");
        var temp2 = new global::Fuse.Reactive.Each();
        temp2_Items_inst = new stardy_FuseReactiveEach_Items_Property(temp2, __selector1);
        var temp5 = new global::Fuse.Reactive.Data("pagesView");
        var temp6 = new global::Fuse.iOS.StatusBarConfig();
        var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp8 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp9 = new global::Fuse.Drawing.LinearGradient();
        var temp10 = new global::Fuse.Drawing.GradientStop();
        var temp11 = new global::Fuse.Drawing.GradientStop();
        upperGrid = new global::Fuse.Controls.Grid();
        var temp12 = new global::Fuse.Controls.Image();
        var temp13 = new global::Fuse.Controls.Text();
        var temp14 = new global::Fuse.Controls.Image();
        var temp15 = new global::Fuse.Animations.Move();
        var temp16 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        lowerGrid = new global::Fuse.Controls.Grid();
        var temp17 = new global::Fuse.Controls.Image();
        var temp18 = new global::Fuse.Controls.Image();
        var temp19 = new global::Fuse.Gestures.Clicked();
        var temp20 = new global::Fuse.Navigation.RouterModify();
        var temp21 = new global::Fuse.Controls.Image();
        var temp22 = new global::Fuse.Animations.Move();
        var temp23 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Controls.Panel();
        var temp25 = new global::Fuse.Controls.PageControl();
        var temp26 = new global::Fuse.Motion.NavigationMotion();
        var temp27 = new Template(this, this);
        var temp28 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp5, Fuse.Reactive.BindingMode.Default);
        temp6.Style = Fuse.Platform.StatusBarStyle.Light;
        temp7.LineNumber = 5;
        temp7.FileName = "MainView.ux";
        temp7.File = new global::Uno.UX.BundleFileSource(import("../../../MainView.js"));
        temp8.Code = "\n    router.bookmark({\n        name: \"myBookmark\",\n        path: [\"TimeLine\", {}]\n    });\n\t";
        temp8.LineNumber = 6;
        temp8.FileName = "MainView.ux";
        temp9.StartPoint = float2(0f, 0f);
        temp9.EndPoint = float2(0f, 1f);
        temp9.Stops.Add(temp10);
        temp9.Stops.Add(temp11);
        temp10.Offset = 0f;
        temp10.Color = float4(0.9372549f, 0.9019608f, 0.9372549f, 1f);
        temp11.Offset = 1f;
        temp11.Color = float4(0.5607843f, 0.7450981f, 0.9137255f, 1f);
        upperGrid.ColumnCount = 3;
        upperGrid.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        upperGrid.Alignment = Fuse.Elements.Alignment.Top;
        upperGrid.Margin = float4(20f, 20f, 20f, 20f);
        upperGrid.Name = __selector2;
        upperGrid.Children.Add(temp12);
        upperGrid.Children.Add(temp13);
        upperGrid.Children.Add(temp14);
        upperGrid.Children.Add(temp);
        temp12.Alignment = Fuse.Elements.Alignment.Left;
        temp12.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/Icons/search.png"));
        temp13.Value = "내 스터디 목록";
        temp13.FontSize = 14f;
        temp13.Color = float4(1f, 1f, 1f, 1f);
        temp13.Alignment = Fuse.Elements.Alignment.Center;
        temp14.Alignment = Fuse.Elements.Alignment.Right;
        temp14.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/Icons/gps.png"));
        temp.Animators.Add(temp15);
        temp.Bindings.Add(temp16);
        temp15.Y = -0.1f;
        temp15.Duration = 0.2;
        temp15.RelativeTo = Fuse.TranslationModes.ParentSize;
        lowerGrid.ColumnCount = 3;
        lowerGrid.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        lowerGrid.Alignment = Fuse.Elements.Alignment.Bottom;
        lowerGrid.Margin = float4(20f, 20f, 20f, 20f);
        lowerGrid.Name = __selector3;
        lowerGrid.Children.Add(temp17);
        lowerGrid.Children.Add(temp18);
        lowerGrid.Children.Add(temp21);
        lowerGrid.Children.Add(temp1);
        temp17.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/Icons/addlocation.png"));
        temp18.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/Icons/location.png"));
        temp18.Children.Add(temp19);
        temp19.Actions.Add(temp20);
        temp20.How = Fuse.Navigation.ModifyRouteHow.Push;
        temp20.Bookmark = "myBookmark";
        temp20.Transition = Fuse.Navigation.NavigationGotoMode.Transition;
        temp21.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/Icons/person.png"));
        temp1.Animators.Add(temp22);
        temp1.Bindings.Add(temp23);
        temp22.Y = 0.1f;
        temp22.Duration = 0.2;
        temp22.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp24.Children.Add(temp25);
        temp25.InactiveState = Fuse.Controls.NavigationControlInactiveState.Unchanged;
        temp25.Transition = Fuse.Controls.NavigationControlTransition.None;
        temp25.Motion = temp26;
        temp25.Children.Add(temp2);
        temp26.GotoDuration = 0.3f;
        temp26.GotoEasing = Fuse.Animations.Easing.QuadraticOut;
        temp2.Templates.Add(temp27);
        temp2.Bindings.Add(temp28);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(upperGrid);
        __g_nametable.Objects.Add(lowerGrid);
        this.Background = temp9;
        this.Children.Add(temp6);
        this.Children.Add(temp7);
        this.Children.Add(temp8);
        this.Children.Add(upperGrid);
        this.Children.Add(lowerGrid);
        this.Children.Add(temp24);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Items";
    static global::Uno.UX.Selector __selector2 = "upperGrid";
    static global::Uno.UX.Selector __selector3 = "lowerGrid";
}
