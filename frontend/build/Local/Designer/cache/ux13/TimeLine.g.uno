[Uno.Compiler.UxGenerated]
public partial class TimeLine: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly TimeLine __parent;
        [Uno.WeakReference] internal readonly TimeLine __parentInstance;
        public Template(TimeLine parent, TimeLine parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::NewsItem();
            return __self;
        }
    }
    global::Uno.UX.Property<Uno.UX.Size> searchPanel_Height_inst;
    global::Uno.UX.Property<object> temp_Items_inst;
    internal global::Fuse.Controls.EdgeNavigator EdgeNavigator;
    internal global::Fuse.Controls.DockPanel content;
    internal global::Fuse.Reactive.EventBinding temp_eb8;
    internal global::Fuse.Controls.TextBox searchPanel;
    internal global::Fuse.Triggers.WhileTrue searchClick;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "EdgeNavigator",
        "content",
        "temp_eb8",
        "searchPanel",
        "searchClick"
    };
    static TimeLine()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TimeLine(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Reactive.Data("newPost");
        searchPanel = new global::Fuse.Controls.TextBox();
        searchPanel_Height_inst = new stardy_FuseElementsElement_Height_Property(searchPanel, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("data");
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new stardy_FuseReactiveEach_Items_Property(temp, __selector1);
        var temp3 = new global::Fuse.Reactive.Member(temp2, "responseData");
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        EdgeNavigator = new global::Fuse.Controls.EdgeNavigator();
        var temp5 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp6 = new global::Fuse.Drawing.LinearGradient();
        var temp7 = new global::Fuse.Drawing.GradientStop();
        var temp8 = new global::Fuse.Drawing.GradientStop();
        content = new global::Fuse.Controls.DockPanel();
        var temp9 = new global::Fuse.Controls.StatusBarBackground();
        var temp10 = new global::Fuse.Controls.BottomFrameBackground();
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new global::Fuse.Controls.Grid();
        var temp13 = new global::Fuse.Controls.Rectangle();
        var temp14 = new global::Fuse.Gestures.Clicked();
        var temp15 = new global::Fuse.Navigation.RouterModify();
        var temp16 = new global::Fuse.Controls.Image();
        var temp17 = new global::Fuse.Controls.Text();
        var temp18 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/fonts/AlegreyaSans-Bold.otf")));
        var temp19 = new global::Fuse.Controls.Panel();
        var temp20 = new global::Fuse.Controls.Panel();
        var temp21 = new global::Fuse.Controls.Image();
        var temp22 = new global::Fuse.Gestures.Clicked();
        var temp23 = new global::Fuse.Triggers.Actions.Toggle();
        var temp24 = new global::Fuse.Controls.Panel();
        var temp25 = new global::Fuse.Controls.Image();
        temp_eb8 = new global::Fuse.Reactive.EventBinding(temp1);
        var temp26 = new global::Fuse.Controls.Rectangle();
        searchClick = new global::Fuse.Triggers.WhileTrue();
        var temp27 = new global::Fuse.Animations.Change<Uno.UX.Size>(searchPanel_Height_inst);
        var temp28 = new global::Fuse.Controls.ScrollView();
        var temp29 = new global::Fuse.Controls.StackPanel();
        var temp30 = new global::Fuse.Controls.Panel();
        var temp31 = new Template(this, this);
        var temp32 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp3, Fuse.Reactive.BindingMode.Default);
        temp4.LineNumber = 3;
        temp4.FileName = "TimeLine.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import("../../../../../TimeLine.js"));
        EdgeNavigator.Name = __selector2;
        EdgeNavigator.Background = temp6;
        EdgeNavigator.Children.Add(temp5);
        EdgeNavigator.Children.Add(content);
        temp5.Code = "\n\t\tvar Observable = require(\"FuseJS/Observable\");\n\n\t\tvar data = Observable();\n\n\t\tfetch('http://az664292.vo.msecnd.net/files/P6FteBeij9A7jTXL-edgenavresponse.json')\n\t\t.then(function(response) { return response.json(); })\n\t\t.then(function(responseObject) { data.value = responseObject; });\n\n\t\tmodule.exports = {\n\t\t\tdata: data\n\t\t};\n\t\t";
        temp5.LineNumber = 5;
        temp5.FileName = "TimeLine.ux";
        temp6.StartPoint = float2(0f, 0f);
        temp6.EndPoint = float2(0f, 1f);
        temp6.Stops.Add(temp7);
        temp6.Stops.Add(temp8);
        temp7.Offset = 0f;
        temp7.Color = float4(0.9372549f, 0.9019608f, 0.9372549f, 1f);
        temp8.Offset = 1f;
        temp8.Color = float4(0.5607843f, 0.7450981f, 0.9137255f, 1f);
        content.Name = __selector3;
        content.Children.Add(temp9);
        content.Children.Add(temp10);
        content.Children.Add(temp11);
        content.Children.Add(searchPanel);
        content.Children.Add(searchClick);
        content.Children.Add(temp28);
        global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp10, Fuse.Layouts.Dock.Bottom);
        global::Fuse.Controls.DockPanel.SetDock(temp11, Fuse.Layouts.Dock.Top);
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp26);
        temp12.Columns = "auto,1*,auto";
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp17);
        temp12.Children.Add(temp19);
        temp13.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp13.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp13.Margin = float4(5f, 7f, 5f, 5f);
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp16);
        temp14.Actions.Add(temp15);
        temp15.How = Fuse.Navigation.ModifyRouteHow.GoBack;
        temp15.Style = "fromTop";
        temp16.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/Icons/backButton_black.png"));
        temp17.Value = "담벼락";
        temp17.FontSize = 16f;
        temp17.Alignment = Fuse.Elements.Alignment.Center;
        temp17.Margin = float4(30f, 5f, 0f, 0f);
        temp17.Font = temp18;
        temp19.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        temp19.Height = new Uno.UX.Size(26f, Uno.UX.Unit.Unspecified);
        temp19.Alignment = Fuse.Elements.Alignment.CenterRight;
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp24);
        temp20.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp20.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp20.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp20.Margin = float4(5f, 5f, 35f, 5f);
        temp20.Children.Add(temp21);
        temp21.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/search2.png"));
        temp21.Children.Add(temp22);
        temp22.Actions.Add(temp23);
        temp23.Target = searchClick;
        temp24.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp24.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp24.Alignment = Fuse.Elements.Alignment.CenterRight;
        temp24.Margin = float4(5f, 5f, 15f, 5f);
        global::Fuse.Gestures.Clicked.AddHandler(temp24, temp_eb8.OnEvent);
        temp24.Children.Add(temp25);
        temp24.Bindings.Add(temp_eb8);
        temp25.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/write_.png"));
        temp26.Color = float4(0.2f, 0.2352941f, 0.282353f, 1f);
        temp26.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp26.Margin = float4(0f, 0f, 0f, 0f);
        searchPanel.Height = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        searchPanel.Alignment = Fuse.Elements.Alignment.Top;
        searchPanel.Opacity = 0.9f;
        searchPanel.Name = __selector4;
        searchPanel.Background = Fuse.Drawing.Brushes.White;
        searchClick.Name = __selector5;
        searchClick.Animators.Add(temp27);
        temp27.Value = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp27.Duration = 0.2;
        temp28.Children.Add(temp29);
        temp29.Alignment = Fuse.Elements.Alignment.Top;
        temp29.Children.Add(temp30);
        temp29.Children.Add(temp);
        temp30.Height = new Uno.UX.Size(7f, Uno.UX.Unit.Unspecified);
        temp.Templates.Add(temp31);
        temp.Bindings.Add(temp32);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(EdgeNavigator);
        __g_nametable.Objects.Add(content);
        __g_nametable.Objects.Add(temp_eb8);
        __g_nametable.Objects.Add(searchPanel);
        __g_nametable.Objects.Add(searchClick);
        this.Children.Add(temp4);
        this.Children.Add(EdgeNavigator);
    }
    static global::Uno.UX.Selector __selector0 = "Height";
    static global::Uno.UX.Selector __selector1 = "Items";
    static global::Uno.UX.Selector __selector2 = "EdgeNavigator";
    static global::Uno.UX.Selector __selector3 = "content";
    static global::Uno.UX.Selector __selector4 = "searchPanel";
    static global::Uno.UX.Selector __selector5 = "searchClick";
}
