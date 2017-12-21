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
    global::Uno.UX.Property<object> temp_Items_inst;
    internal global::Fuse.Controls.EdgeNavigator EdgeNavigator;
    internal global::Fuse.Controls.DockPanel content;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "EdgeNavigator",
        "content"
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
        var temp1 = new global::Fuse.Reactive.Data("data");
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new stardy_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Member(temp1, "responseData");
        var temp3 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        EdgeNavigator = new global::Fuse.Controls.EdgeNavigator();
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Drawing.LinearGradient();
        var temp6 = new global::Fuse.Drawing.GradientStop();
        var temp7 = new global::Fuse.Drawing.GradientStop();
        content = new global::Fuse.Controls.DockPanel();
        var temp8 = new global::Fuse.Controls.StatusBarBackground();
        var temp9 = new global::Fuse.Controls.BottomFrameBackground();
        var temp10 = new global::Fuse.Controls.StackPanel();
        var temp11 = new global::Fuse.Controls.Grid();
        var temp12 = new global::Fuse.Controls.Rectangle();
        var temp13 = new global::Fuse.Gestures.Clicked();
        var temp14 = new global::Fuse.Navigation.RouterModify();
        var temp15 = new global::Fuse.Controls.Image();
        var temp16 = new global::Fuse.Controls.Text();
        var temp17 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/fonts/AlegreyaSans-Bold.otf")));
        var temp18 = new global::Fuse.Controls.Panel();
        var temp19 = new global::Fuse.Controls.Panel();
        var temp20 = new global::Fuse.Controls.Image();
        var temp21 = new global::Fuse.Controls.Panel();
        var temp22 = new global::Fuse.Controls.Image();
        var temp23 = new global::Fuse.Controls.Rectangle();
        var temp24 = new global::Fuse.Controls.ScrollView();
        var temp25 = new global::Fuse.Controls.StackPanel();
        var temp26 = new global::Fuse.Controls.Panel();
        var temp27 = new Template(this, this);
        var temp28 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp2, Fuse.Reactive.BindingMode.Default);
        temp3.LineNumber = 3;
        temp3.FileName = "TimeLine.ux";
        temp3.File = new global::Uno.UX.BundleFileSource(import("../../../../../TimeLine.js"));
        EdgeNavigator.Name = __selector1;
        EdgeNavigator.Background = temp5;
        EdgeNavigator.Children.Add(temp4);
        EdgeNavigator.Children.Add(content);
        temp4.Code = "\n\t\t\tvar Observable = require(\"FuseJS/Observable\");\n\n\t\t\tvar sidebarOpen = Observable(false);\n\t\t\tfunction setSidebarOpen() {\n\t\t\t\tsidebarOpen.value = true;\n\t\t\t};\n\t\t\tfunction setSidebarClosed() {\n\t\t\t\tsidebarOpen.value = false;\n\t\t\t};\n\n\t\t\tvar data = Observable();\n\n\t\t\tfetch('http://az664292.vo.msecnd.net/files/P6FteBeij9A7jTXL-edgenavresponse.json')\n\t\t\t.then(function(response) { return response.json(); })\n\t\t\t.then(function(responseObject) { data.value = responseObject; });\n\n\t\t\tmodule.exports = {\n\t\t\t\tdata: data,\n\t\t\t\tsidebarOpen: sidebarOpen,\n\t\t\t\tsetSidebarOpen: setSidebarOpen,\n\t\t\t\tsetSidebarClosed: setSidebarClosed\n\t\t\t};\n\t\t";
        temp4.LineNumber = 5;
        temp4.FileName = "TimeLine.ux";
        temp5.StartPoint = float2(0f, 0f);
        temp5.EndPoint = float2(0f, 1f);
        temp5.Stops.Add(temp6);
        temp5.Stops.Add(temp7);
        temp6.Offset = 0f;
        temp6.Color = float4(0.9372549f, 0.9019608f, 0.9372549f, 1f);
        temp7.Offset = 1f;
        temp7.Color = float4(0.5607843f, 0.7450981f, 0.9137255f, 1f);
        content.Name = __selector2;
        content.Children.Add(temp8);
        content.Children.Add(temp9);
        content.Children.Add(temp10);
        content.Children.Add(temp24);
        global::Fuse.Controls.DockPanel.SetDock(temp8, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Bottom);
        global::Fuse.Controls.DockPanel.SetDock(temp10, Fuse.Layouts.Dock.Top);
        temp10.Children.Add(temp11);
        temp10.Children.Add(temp23);
        temp11.Columns = "auto,1*,auto";
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp16);
        temp11.Children.Add(temp18);
        temp12.Color = float4(1f, 1f, 1f, 1f);
        temp12.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp12.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp12.Margin = float4(5f, 7f, 5f, 5f);
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp15);
        temp13.Actions.Add(temp14);
        temp14.How = Fuse.Navigation.ModifyRouteHow.GoBack;
        temp14.Style = "fromTop";
        temp15.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/backButton.png"));
        temp16.Value = "정보 공유방";
        temp16.FontSize = 16f;
        temp16.Alignment = Fuse.Elements.Alignment.Center;
        temp16.Margin = float4(30f, 5f, 0f, 0f);
        temp16.Font = temp17;
        temp18.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        temp18.Height = new Uno.UX.Size(26f, Uno.UX.Unit.Unspecified);
        temp18.Alignment = Fuse.Elements.Alignment.CenterRight;
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp21);
        temp19.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp19.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp19.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp19.Margin = float4(5f, 5f, 35f, 5f);
        temp19.Children.Add(temp20);
        temp20.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/search2.png"));
        temp21.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp21.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp21.Alignment = Fuse.Elements.Alignment.CenterRight;
        temp21.Margin = float4(5f, 5f, 15f, 5f);
        temp21.Children.Add(temp22);
        temp22.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/write.png"));
        temp23.Color = float4(0.2f, 0.2352941f, 0.282353f, 1f);
        temp23.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp23.Margin = float4(0f, 0f, 0f, 0f);
        temp24.Children.Add(temp25);
        temp25.Alignment = Fuse.Elements.Alignment.Top;
        temp25.Children.Add(temp26);
        temp25.Children.Add(temp);
        temp26.Height = new Uno.UX.Size(7f, Uno.UX.Unit.Unspecified);
        temp.Templates.Add(temp27);
        temp.Bindings.Add(temp28);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(EdgeNavigator);
        __g_nametable.Objects.Add(content);
        this.Children.Add(temp3);
        this.Children.Add(EdgeNavigator);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "EdgeNavigator";
    static global::Uno.UX.Selector __selector2 = "content";
}
