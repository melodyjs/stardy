[Uno.Compiler.UxGenerated]
public partial class AddPost: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Url_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb11;
    internal global::Fuse.Reactive.EventBinding temp_eb12;
    internal global::Fuse.Controls.Text ImageField;
    internal global::TitleTextPost PostTitle;
    internal global::TitleTextPost PostContent;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb11",
        "temp_eb12",
        "Image Field",
        "PostTitle",
        "PostContent"
    };
    static AddPost()
    {
    }
    [global::Uno.UX.UXConstructor]
    public AddPost(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp4 = new global::Fuse.Reactive.Data("addClicked");
        var temp5 = new global::Fuse.Reactive.Data("cancelClicked");
        var temp = new global::Fuse.Controls.TextBox();
        temp_Value_inst = new stardy_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp6 = new global::Fuse.Reactive.Data("image_address");
        var temp1 = new global::Fuse.Controls.Image();
        temp1_Url_inst = new stardy_FuseControlsImage_Url_Property(temp1, __selector1);
        var temp7 = new global::Fuse.Reactive.Data("image_address");
        var temp2 = new global::Fuse.Controls.TextBox();
        temp2_Value_inst = new stardy_FuseControlsTextInputControl_Value_Property(temp2, __selector0);
        var temp8 = new global::Fuse.Reactive.Data("title");
        var temp3 = new global::Fuse.Controls.TextView();
        temp3_Value_inst = new stardy_FuseControlsTextInputControl_Value_Property(temp3, __selector0);
        var temp9 = new global::Fuse.Reactive.Data("post_content");
        var temp10 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new global::Fuse.Drawing.LinearGradient();
        var temp12 = new global::Fuse.Drawing.GradientStop();
        var temp13 = new global::Fuse.Drawing.GradientStop();
        var temp14 = new global::Fuse.Controls.DockPanel();
        var temp15 = new global::Fuse.Controls.Grid();
        var temp16 = new global::Fuse.Controls.Button();
        temp_eb11 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp17 = new global::Fuse.Controls.Button();
        temp_eb12 = new global::Fuse.Reactive.EventBinding(temp5);
        var temp18 = new global::Fuse.Controls.ScrollView();
        var temp19 = new global::Fuse.Controls.StackPanel();
        ImageField = new global::Fuse.Controls.Text();
        var temp20 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp21 = new global::Fuse.Reactive.DataBinding(temp1_Url_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp22 = new global::Fuse.Controls.StackPanel();
        PostTitle = new global::TitleTextPost();
        var temp23 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Controls.StackPanel();
        PostContent = new global::TitleTextPost();
        var temp25 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp9, Fuse.Reactive.BindingMode.Default);
        temp10.LineNumber = 4;
        temp10.FileName = "AddPost.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import("../../../../../AddPost.js"));
        temp11.StartPoint = float2(0f, 0f);
        temp11.EndPoint = float2(0f, 1f);
        temp11.Stops.Add(temp12);
        temp11.Stops.Add(temp13);
        temp12.Offset = 0f;
        temp12.Color = float4(0.9372549f, 0.9019608f, 0.9372549f, 1f);
        temp13.Offset = 1f;
        temp13.Color = float4(0.5607843f, 0.7450981f, 0.9137255f, 1f);
        temp14.Children.Add(temp15);
        temp14.Children.Add(temp18);
        temp15.ColumnCount = 1;
        global::Fuse.Controls.DockPanel.SetDock(temp15, Fuse.Layouts.Dock.Bottom);
        temp15.Children.Add(temp16);
        temp15.Children.Add(temp17);
        temp16.Text = "Add";
        temp16.Color = Fuse.Drawing.Colors.White;
        global::Fuse.Gestures.Clicked.AddHandler(temp16, temp_eb11.OnEvent);
        temp16.Bindings.Add(temp_eb11);
        temp17.Text = "Cancel";
        temp17.Color = Fuse.Drawing.Colors.White;
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb12.OnEvent);
        temp17.Bindings.Add(temp_eb12);
        temp18.Children.Add(temp19);
        temp19.ItemSpacing = 10f;
        temp19.Padding = float4(10f, 10f, 10f, 10f);
        temp19.Children.Add(ImageField);
        temp19.Children.Add(temp);
        temp19.Children.Add(temp1);
        temp19.Children.Add(temp22);
        temp19.Children.Add(temp24);
        ImageField.Value = "Image";
        ImageField.Name = __selector2;
        temp.PlaceholderText = "Enter image path";
        temp.PlaceholderColor = Fuse.Drawing.Colors.White;
        temp.Bindings.Add(temp20);
        temp1.Bindings.Add(temp21);
        temp22.Children.Add(PostTitle);
        temp22.Children.Add(temp2);
        PostTitle.Value = "Post Title:";
        PostTitle.Name = __selector3;
        temp2.PlaceholderText = "Enter  Title Here";
        temp2.PlaceholderColor = Fuse.Drawing.Colors.White;
        temp2.Bindings.Add(temp23);
        temp24.Children.Add(PostContent);
        temp24.Children.Add(temp3);
        PostContent.Value = "Content:";
        PostContent.Name = __selector4;
        temp3.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp3.Bindings.Add(temp25);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb11);
        __g_nametable.Objects.Add(temp_eb12);
        __g_nametable.Objects.Add(ImageField);
        __g_nametable.Objects.Add(PostTitle);
        __g_nametable.Objects.Add(PostContent);
        this.Background = temp11;
        this.Children.Add(temp10);
        this.Children.Add(temp14);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Url";
    static global::Uno.UX.Selector __selector2 = "Image Field";
    static global::Uno.UX.Selector __selector3 = "PostTitle";
    static global::Uno.UX.Selector __selector4 = "PostContent";
}
