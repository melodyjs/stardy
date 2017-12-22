[Uno.Compiler.UxGenerated]
public partial class NewsItem: Fuse.Controls.StackPanel
{
    global::Uno.UX.Property<string> temp_Url_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Url_inst;
    global::Uno.UX.Property<string> temp5_Value_inst;
    global::Uno.UX.Property<string> temp6_Value_inst;
    global::Uno.UX.Property<string> temp7_Value_inst;
    global::Uno.UX.Property<string> temp8_Value_inst;
    static NewsItem()
    {
    }
    [global::Uno.UX.UXConstructor]
    public NewsItem()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Drawing.ImageFill();
        temp_Url_inst = new stardy_FuseDrawingImageFill_Url_Property(temp, __selector0);
        var temp9 = new global::Fuse.Reactive.Data("portrait");
        var temp1 = new global::SubText();
        temp1_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp1, __selector1);
        var temp10 = new global::Fuse.Reactive.Data("postAge");
        var temp2 = new global::SubText();
        temp2_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp2, __selector1);
        var temp11 = new global::Fuse.Reactive.Data("source");
        var temp3 = new global::SubText();
        temp3_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp3, __selector1);
        var temp12 = new global::Fuse.Reactive.Data("location");
        var temp4 = new global::Fuse.Controls.Image();
        temp4_Url_inst = new stardy_FuseControlsImage_Url_Property(temp4, __selector0);
        var temp13 = new global::Fuse.Reactive.Data("imageUrl");
        var temp5 = new global::Header();
        temp5_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp5, __selector1);
        var temp14 = new global::Fuse.Reactive.Data("headline");
        var temp6 = new global::Article();
        temp6_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp6, __selector1);
        var temp15 = new global::Fuse.Reactive.Data("body");
        var temp7 = new global::Stat();
        temp7_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp7, __selector1);
        var temp16 = new global::Fuse.Reactive.Data("numLikes");
        var temp8 = new global::Stat();
        temp8_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp8, __selector1);
        var temp17 = new global::Fuse.Reactive.Data("numComments");
        var temp18 = new global::Fuse.Controls.DockPanel();
        var temp19 = new global::Fuse.Controls.Circle();
        var temp20 = new global::Fuse.Reactive.DataBinding(temp_Url_inst, temp9, Fuse.Reactive.BindingMode.Default);
        var temp21 = new global::Fuse.Controls.DockPanel();
        var temp22 = new global::Fuse.Controls.StackPanel();
        var temp23 = new global::Name();
        var temp24 = new global::Fuse.Controls.StackPanel();
        var temp25 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
        var temp26 = new global::VerticalBar();
        var temp27 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp11, Fuse.Reactive.BindingMode.Default);
        var temp28 = new global::VerticalBar();
        var temp29 = new global::Fuse.Controls.Image();
        var temp30 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp12, Fuse.Reactive.BindingMode.Default);
        var temp31 = new global::Fuse.Reactive.DataBinding(temp4_Url_inst, temp13, Fuse.Reactive.BindingMode.Default);
        var temp32 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp14, Fuse.Reactive.BindingMode.Default);
        var temp33 = new global::Fuse.Reactive.DataBinding(temp6_Value_inst, temp15, Fuse.Reactive.BindingMode.Default);
        var temp34 = new global::Fuse.Controls.StackPanel();
        var temp35 = new global::ActionIcon();
        var temp36 = new global::Fuse.Reactive.DataBinding(temp7_Value_inst, temp16, Fuse.Reactive.BindingMode.Default);
        var temp37 = new global::ActionIcon();
        var temp38 = new global::Fuse.Reactive.DataBinding(temp8_Value_inst, temp17, Fuse.Reactive.BindingMode.Default);
        var temp39 = new global::ActionIcon();
        var temp40 = new global::HorizontalBar();
        this.Margin = float4(0f, 14f, 0f, 10f);
        temp18.Margin = float4(10f, 0f, 0f, 15f);
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp21);
        temp19.Width = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp19.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp19, Fuse.Layouts.Dock.Left);
        temp19.Fills.Add(temp);
        temp19.Bindings.Add(temp20);
        temp.WrapMode = Fuse.Drawing.WrapMode.ClampToEdge;
        temp21.Margin = float4(10f, 4f, 10f, 0f);
        temp21.Children.Add(temp22);
        temp21.Children.Add(temp24);
        temp22.Orientation = Fuse.Layouts.Orientation.Horizontal;
        global::Fuse.Controls.DockPanel.SetDock(temp22, Fuse.Layouts.Dock.Top);
        temp22.Children.Add(temp23);
        temp23.Value = "Someone unknown";
        temp24.Orientation = Fuse.Layouts.Orientation.Horizontal;
        global::Fuse.Controls.DockPanel.SetDock(temp24, Fuse.Layouts.Dock.Bottom);
        temp24.Children.Add(temp1);
        temp24.Children.Add(temp26);
        temp24.Children.Add(temp2);
        temp24.Children.Add(temp28);
        temp24.Children.Add(temp29);
        temp24.Children.Add(temp3);
        temp1.Bindings.Add(temp25);
        temp2.Bindings.Add(temp27);
        temp29.Color = float4(0.2f, 0.2352941f, 0.282353f, 1f);
        temp29.Width = new Uno.UX.Size(14f, Uno.UX.Unit.Unspecified);
        temp29.Height = new Uno.UX.Size(14f, Uno.UX.Unit.Unspecified);
        temp29.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp29.Margin = float4(0f, 0f, 2f, 2f);
        temp29.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/Icons/Location.png"));
        temp3.Bindings.Add(temp30);
        temp4.Bindings.Add(temp31);
        temp5.Bindings.Add(temp32);
        temp6.Bindings.Add(temp33);
        temp34.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp34.Margin = float4(14f, 10f, 14f, 8f);
        temp34.Children.Add(temp35);
        temp34.Children.Add(temp7);
        temp34.Children.Add(temp37);
        temp34.Children.Add(temp8);
        temp34.Children.Add(temp39);
        temp35.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/Icons/Like.png"));
        temp7.Bindings.Add(temp36);
        temp37.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/Icons/Comment.png"));
        temp8.Bindings.Add(temp38);
        temp39.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/Icons/Share.png"));
        this.Children.Add(temp18);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
        this.Children.Add(temp34);
        this.Children.Add(temp40);
    }
    static global::Uno.UX.Selector __selector0 = "Url";
    static global::Uno.UX.Selector __selector1 = "Value";
}
