[Uno.Compiler.UxGenerated]
public partial class AddGroup: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> GroupTags_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb10;
    internal global::Fuse.Reactive.EventBinding temp_eb11;
    internal global::TitleText GroupName;
    internal global::TitleText GroupLocation;
    internal global::Fuse.Controls.TextBox GroupTags;
    internal global::TitleText GroupIntro;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb10",
        "temp_eb11",
        "GroupName",
        "GroupLocation",
        "GroupTags",
        "GroupIntro"
    };
    static AddGroup()
    {
    }
    [global::Uno.UX.UXConstructor]
    public AddGroup(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.Data("addClicked");
        var temp4 = new global::Fuse.Reactive.Data("cancelClicked");
        var temp = new global::Fuse.Controls.TextBox();
        temp_Value_inst = new stardy_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp5 = new global::Fuse.Reactive.Data("name");
        var temp1 = new global::Fuse.Controls.TextBox();
        temp1_Value_inst = new stardy_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp6 = new global::Fuse.Reactive.Data("location");
        GroupTags = new global::Fuse.Controls.TextBox();
        GroupTags_Value_inst = new stardy_FuseControlsTextInputControl_Value_Property(GroupTags, __selector0);
        var temp7 = new global::Fuse.Reactive.Data("tags");
        var temp2 = new global::Fuse.Controls.TextBox();
        temp2_Value_inst = new stardy_FuseControlsTextInputControl_Value_Property(temp2, __selector0);
        var temp8 = new global::Fuse.Reactive.Data("intro");
        var temp9 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp10 = new global::Fuse.Drawing.LinearGradient();
        var temp11 = new global::Fuse.Drawing.GradientStop();
        var temp12 = new global::Fuse.Drawing.GradientStop();
        var temp13 = new global::Fuse.Controls.DockPanel();
        var temp14 = new global::Fuse.Controls.Grid();
        var temp15 = new global::Fuse.Controls.Button();
        temp_eb10 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp16 = new global::Fuse.Controls.Button();
        temp_eb11 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp17 = new global::Fuse.Controls.ScrollView();
        var temp18 = new global::Fuse.Controls.StackPanel();
        var temp19 = new global::Fuse.Controls.StackPanel();
        GroupName = new global::TitleText();
        var temp20 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp21 = new global::Fuse.Controls.StackPanel();
        GroupLocation = new global::TitleText();
        var temp22 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp23 = new global::Fuse.Controls.StackPanel();
        var temp24 = new global::TitleText();
        var temp25 = new global::Fuse.Reactive.DataBinding(GroupTags_Value_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp26 = new global::Fuse.Controls.StackPanel();
        GroupIntro = new global::TitleText();
        var temp27 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
        temp9.LineNumber = 4;
        temp9.FileName = "AddGroup.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../../../../AddGroup.js"));
        temp10.StartPoint = float2(0f, 0f);
        temp10.EndPoint = float2(0f, 1f);
        temp10.Stops.Add(temp11);
        temp10.Stops.Add(temp12);
        temp11.Offset = 0f;
        temp11.Color = float4(0.9372549f, 0.9019608f, 0.9372549f, 1f);
        temp12.Offset = 1f;
        temp12.Color = float4(0.5607843f, 0.7450981f, 0.9137255f, 1f);
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp17);
        temp14.ColumnCount = 1;
        global::Fuse.Controls.DockPanel.SetDock(temp14, Fuse.Layouts.Dock.Bottom);
        temp14.Children.Add(temp15);
        temp14.Children.Add(temp16);
        temp15.Text = "Add";
        temp15.Color = Fuse.Drawing.Colors.White;
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb10.OnEvent);
        temp15.Bindings.Add(temp_eb10);
        temp16.Text = "Cancel";
        temp16.Color = Fuse.Drawing.Colors.White;
        global::Fuse.Gestures.Clicked.AddHandler(temp16, temp_eb11.OnEvent);
        temp16.Bindings.Add(temp_eb11);
        temp17.Children.Add(temp18);
        temp18.ItemSpacing = 10f;
        temp18.Padding = float4(10f, 10f, 10f, 10f);
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp21);
        temp18.Children.Add(temp23);
        temp18.Children.Add(temp26);
        temp19.Children.Add(GroupName);
        temp19.Children.Add(temp);
        GroupName.Value = "Group Name:";
        GroupName.Name = __selector1;
        temp.PlaceholderText = "Enter Group Name Here";
        temp.PlaceholderColor = Fuse.Drawing.Colors.White;
        temp.Bindings.Add(temp20);
        temp21.Children.Add(GroupLocation);
        temp21.Children.Add(temp1);
        GroupLocation.Value = "Location:";
        GroupLocation.Name = __selector2;
        temp1.PlaceholderText = "Enter Location Here";
        temp1.PlaceholderColor = Fuse.Drawing.Colors.White;
        temp1.Bindings.Add(temp22);
        temp23.Children.Add(temp24);
        temp23.Children.Add(GroupTags);
        temp24.Value = "Tags:";
        GroupTags.PlaceholderText = "Enter Tags Here";
        GroupTags.PlaceholderColor = Fuse.Drawing.Colors.White;
        GroupTags.Name = __selector3;
        GroupTags.Bindings.Add(temp25);
        temp26.Children.Add(GroupIntro);
        temp26.Children.Add(temp2);
        GroupIntro.Value = "Intro:";
        GroupIntro.TextColor = Fuse.Drawing.Colors.White;
        GroupIntro.Name = __selector4;
        temp2.PlaceholderText = "Enter Short Intro Here";
        temp2.PlaceholderColor = Fuse.Drawing.Colors.White;
        temp2.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp2.Bindings.Add(temp27);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb10);
        __g_nametable.Objects.Add(temp_eb11);
        __g_nametable.Objects.Add(GroupName);
        __g_nametable.Objects.Add(GroupLocation);
        __g_nametable.Objects.Add(GroupTags);
        __g_nametable.Objects.Add(GroupIntro);
        this.Background = temp10;
        this.Children.Add(temp9);
        this.Children.Add(temp13);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "GroupName";
    static global::Uno.UX.Selector __selector2 = "GroupLocation";
    static global::Uno.UX.Selector __selector3 = "GroupTags";
    static global::Uno.UX.Selector __selector4 = "GroupIntro";
}
