[Uno.Compiler.UxGenerated]
public partial class Card: Fuse.Controls.Panel
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly Card __parent;
        [Uno.WeakReference] internal readonly Card __parentInstance;
        public Template(Card parent, Card parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Image();
            __self.Color = float4(0.6f, 0.6f, 1f, 1f);
            __self.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
            __self.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
            __self.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Icons/star.png"));
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly Card __parent;
        [Uno.WeakReference] internal readonly Card __parentInstance;
        public Template1(Card parent, Card parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Image();
            __self.Color = float4(0.6f, 0.6f, 0.6f, 1f);
            __self.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
            __self.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
            __self.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Icons/star.png"));
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly Card __parent;
        [Uno.WeakReference] internal readonly Card __parentInstance;
        public Template2(Card parent, Card parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Uno.UX.FileSource> temp_File_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Circle();
            var temp = new global::Fuse.Drawing.ImageFill();
            temp_File_inst = new stardy_FuseDrawingImageFill_File_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp2 = new global::Fuse.Drawing.Stroke();
            var temp3 = new global::Fuse.Drawing.StaticSolidColor(float4(0.8666667f, 0.8666667f, 0.8666667f, 1f));
            var temp4 = new global::Fuse.Reactive.DataBinding(temp_File_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Color = Fuse.Drawing.Colors.Red;
            __self.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            __self.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            __self.Margin = float4(0f, 0f, -6f, 0f);
            temp2.Width = 2f;
            temp2.Brush = temp3;
            temp.WrapMode = Fuse.Drawing.WrapMode.ClampToEdge;
            __self.Fills.Add(temp);
            __self.Strokes.Add(temp2);
            __self.Bindings.Add(temp4);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "File";
    }
    global::Uno.UX.Property<float> this_Opacity_inst;
    global::Uno.UX.Property<float> pageScaling_Factor_inst;
    global::Uno.UX.Property<float> bottomPanelScaling_X_inst;
    global::Uno.UX.Property<float> bottomPanelScaling_Y_inst;
    global::Uno.UX.Property<float> bottomPanel_Opacity_inst;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<Uno.UX.FileSource> temp3_File_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<string> temp5_Value_inst;
    global::Uno.UX.Property<int> temp6_Count_inst;
    global::Uno.UX.Property<int> temp7_Count_inst;
    global::Uno.UX.Property<object> temp8_Items_inst;
    internal global::Fuse.Scaling pageScaling;
    internal global::Fuse.Gestures.SwipeGesture swipe;
    internal global::Fuse.Controls.Panel topPanel;
    internal global::Fuse.Controls.Rectangle topPanelRect;
    internal global::Fuse.Controls.Panel bottomPanel;
    internal global::Fuse.Scaling bottomPanelScaling;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "pageScaling",
        "swipe",
        "topPanel",
        "topPanelRect",
        "bottomPanel",
        "bottomPanelScaling"
    };
    static Card()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Card()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_Opacity_inst = new stardy_FuseElementsElement_Opacity_Property(this, __selector0);
        pageScaling = new global::Fuse.Scaling();
        pageScaling_Factor_inst = new stardy_FuseScaling_Factor_Property(pageScaling, __selector1);
        swipe = new global::Fuse.Gestures.SwipeGesture();
        bottomPanelScaling = new global::Fuse.Scaling();
        bottomPanelScaling_X_inst = new stardy_FuseScaling_X_Property(bottomPanelScaling, __selector2);
        bottomPanelScaling_Y_inst = new stardy_FuseScaling_Y_Property(bottomPanelScaling, __selector3);
        bottomPanel = new global::Fuse.Controls.Panel();
        bottomPanel_Opacity_inst = new stardy_FuseElementsElement_Opacity_Property(bottomPanel, __selector0);
        var temp9 = new global::Fuse.Reactive.Data("item");
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp, __selector4);
        var temp10 = new global::Fuse.Reactive.Member(temp9, "name");
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp11 = new global::Fuse.Reactive.Data("item");
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp1, __selector4);
        var temp12 = new global::Fuse.Reactive.Member(temp11, "lat");
        var temp13 = new global::Fuse.Reactive.Data("item");
        var temp2 = new global::Fuse.Controls.Text();
        temp2_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp2, __selector4);
        var temp14 = new global::Fuse.Reactive.Member(temp13, "long");
        var temp15 = new global::Fuse.Reactive.Data("item");
        var temp3 = new global::Fuse.Drawing.ImageFill();
        temp3_File_inst = new stardy_FuseDrawingImageFill_File_Property(temp3, __selector5);
        var temp16 = new global::Fuse.Reactive.Member(temp15, "image");
        var temp17 = new global::Fuse.Reactive.Data("item");
        var temp4 = new global::Fuse.Controls.Text();
        temp4_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp4, __selector4);
        var temp18 = new global::Fuse.Reactive.Member(temp17, "location");
        var temp19 = new global::Fuse.Reactive.Data("item");
        var temp5 = new global::Fuse.Controls.Text();
        temp5_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp5, __selector4);
        var temp20 = new global::Fuse.Reactive.Member(temp19, "no");
        var temp21 = new global::Fuse.Reactive.Data("item");
        var temp6 = new global::Fuse.Reactive.Each();
        temp6_Count_inst = new stardy_FuseReactiveEach_Count_Property(temp6, __selector6);
        var temp22 = new global::Fuse.Reactive.Member(temp21, "stars");
        var temp23 = new global::Fuse.Reactive.Data("item");
        var temp7 = new global::Fuse.Reactive.Each();
        temp7_Count_inst = new stardy_FuseReactiveEach_Count_Property(temp7, __selector6);
        var temp24 = new global::Fuse.Reactive.Member(temp23, "starsRest");
        var temp25 = new global::Fuse.Reactive.Data("item");
        var temp8 = new global::Fuse.Reactive.Each();
        temp8_Items_inst = new stardy_FuseReactiveEach_Items_Property(temp8, __selector7);
        var temp26 = new global::Fuse.Reactive.Member(temp25, "people");
        var temp27 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp28 = new global::Fuse.Animations.Change<float>(this_Opacity_inst);
        var temp29 = new global::Fuse.Animations.Change<float>(pageScaling_Factor_inst);
        var temp30 = new global::Fuse.Navigation.EnteringAnimation();
        var temp31 = new global::Fuse.Animations.Move();
        var temp32 = new global::Fuse.Navigation.ExitingAnimation();
        var temp33 = new global::Fuse.Animations.Move();
        var temp34 = new global::Fuse.Gestures.SwipingAnimation(swipe);
        var temp35 = new global::Fuse.Animations.Move();
        var temp36 = new global::Fuse.Animations.Change<float>(bottomPanelScaling_X_inst);
        var temp37 = new global::Fuse.Animations.Change<float>(bottomPanelScaling_Y_inst);
        var temp38 = new global::Fuse.Animations.Change<float>(bottomPanel_Opacity_inst);
        var temp39 = new global::Fuse.Navigation.WhileInactive();
        var temp40 = new global::Fuse.Gestures.SetSwipeActive();
        topPanel = new global::Fuse.Controls.Panel();
        var temp41 = new global::Fuse.Controls.Rectangle();
        var temp42 = new global::Fuse.Drawing.LinearGradient();
        var temp43 = new global::Fuse.Drawing.GradientStop();
        var temp44 = new global::Fuse.Drawing.GradientStop();
        var temp45 = new global::Fuse.Drawing.GradientStop();
        var temp46 = new global::Fuse.Drawing.GradientStop();
        var temp47 = new global::Fuse.Drawing.GradientStop();
        var temp48 = new global::Fuse.Controls.Shadow();
        var temp49 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp10, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp50 = new global::Fuse.Controls.Grid();
        var temp51 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp12, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp52 = new global::Fuse.Controls.Image();
        var temp53 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp14, __g_nametable, Fuse.Reactive.BindingMode.Default);
        topPanelRect = new global::Fuse.Controls.Rectangle();
        var temp54 = new global::Fuse.Controls.Shadow();
        var temp55 = new global::Fuse.Reactive.DataBinding(temp3_File_inst, temp16, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp56 = new global::Fuse.Controls.Rectangle();
        var temp57 = new global::Fuse.Controls.Shadow();
        var temp58 = new global::Fuse.Controls.Grid();
        var temp59 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp18, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp60 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp20, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp61 = new global::Fuse.Controls.StackPanel();
        var temp62 = new global::Fuse.Controls.StackPanel();
        var temp63 = new Template(this, this);
        var temp64 = new global::Fuse.Reactive.DataBinding(temp6_Count_inst, temp22, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp65 = new global::Fuse.Controls.StackPanel();
        var temp66 = new Template1(this, this);
        var temp67 = new global::Fuse.Reactive.DataBinding(temp7_Count_inst, temp24, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp68 = new global::Fuse.Controls.Grid();
        var temp69 = new global::Fuse.Controls.StackPanel();
        var temp70 = new Template2(this, this);
        var temp71 = new global::Fuse.Reactive.DataBinding(temp8_Items_inst, temp26, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp72 = new global::Fuse.Controls.StackPanel();
        var temp73 = new global::Fuse.Controls.Circle();
        var temp74 = new global::Fuse.Controls.Circle();
        var temp75 = new global::Fuse.Controls.Circle();
        this.Opacity = 0.4f;
        pageScaling.Factor = 0.95f;
        pageScaling.Name = __selector8;
        temp27.Animators.Add(temp28);
        temp27.Animators.Add(temp29);
        temp28.Value = 1f;
        temp28.Duration = 0.5;
        temp29.Value = 1f;
        temp29.Duration = 0.5;
        temp30.Scale = 0.5f;
        temp30.Animators.Add(temp31);
        temp31.X = -1.4f;
        temp31.Duration = 0.5;
        temp31.RelativeTo = Fuse.TranslationModes.ParentSize;
        temp32.Scale = 0.5f;
        temp32.Animators.Add(temp33);
        temp33.X = 1.4f;
        temp33.Duration = 0.5;
        temp33.RelativeTo = Fuse.TranslationModes.ParentSize;
        swipe.Type = Fuse.Gestures.SwipeType.Active;
        swipe.Direction = Fuse.Gestures.SwipeDirection.Up;
        swipe.Name = __selector9;
        temp34.Animators.Add(temp35);
        temp34.Animators.Add(temp36);
        temp34.Animators.Add(temp37);
        temp34.Animators.Add(temp38);
        temp35.Y = -0.3f;
        temp35.Duration = 0.5;
        temp35.RelativeTo = Fuse.TranslationModes.Size;
        temp35.Target = topPanel;
        temp36.Value = 1f;
        temp36.Duration = 0.5;
        temp37.Value = 1f;
        temp37.Duration = 0.5;
        temp38.Value = 1f;
        temp38.Duration = 0.5;
        temp39.Threshold = 0.2f;
        temp39.Actions.Add(temp40);
        temp40.Value = false;
        temp40.Target = swipe;
        topPanel.Width = new Uno.UX.Size(60f, Uno.UX.Unit.Percent);
        topPanel.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
        topPanel.Name = __selector10;
        topPanel.Children.Add(temp41);
        topPanel.Children.Add(temp);
        topPanel.Children.Add(temp50);
        topPanel.Children.Add(topPanelRect);
        temp41.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp41.Layer = Fuse.Layer.Background;
        temp41.Fills.Add(temp42);
        temp42.StartPoint = float2(0f, 0f);
        temp42.EndPoint = float2(0f, 1f);
        temp42.Stops.Add(temp43);
        temp42.Stops.Add(temp44);
        temp42.Stops.Add(temp45);
        temp42.Stops.Add(temp46);
        temp42.Stops.Add(temp47);
        temp43.Offset = 0f;
        temp43.Color = float4(0f, 0f, 0f, 0.2666667f);
        temp44.Offset = 0.25f;
        temp44.Color = float4(0f, 0f, 0f, 0f);
        temp45.Offset = 0.7f;
        temp45.Color = float4(0f, 0f, 0f, 0f);
        temp46.Offset = 0.85f;
        temp46.Color = float4(0f, 0f, 0f, 0.4666667f);
        temp47.Offset = 1f;
        temp47.Color = float4(0f, 0f, 0f, 0.4666667f);
        temp.FontSize = 24f;
        temp.Color = float4(0.8666667f, 0.8666667f, 0.8666667f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp.Margin = float4(10f, 10f, 10f, 10f);
        temp.Children.Add(temp48);
        temp.Bindings.Add(temp49);
        temp48.Mode = Fuse.Controls.Shadow.ShadowMode.PerPixel;
        temp50.ColumnCount = 3;
        temp50.Alignment = Fuse.Elements.Alignment.Bottom;
        temp50.Margin = float4(20f, 20f, 20f, 20f);
        temp50.Children.Add(temp1);
        temp50.Children.Add(temp52);
        temp50.Children.Add(temp2);
        temp1.FontSize = 10f;
        temp1.Color = float4(1f, 1f, 1f, 1f);
        temp1.Bindings.Add(temp51);
        temp52.Width = new Uno.UX.Size(13f, Uno.UX.Unit.Unspecified);
        temp52.Height = new Uno.UX.Size(13f, Uno.UX.Unit.Unspecified);
        temp52.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Icons/location.png"));
        temp2.FontSize = 10f;
        temp2.Color = float4(1f, 1f, 1f, 1f);
        temp2.Alignment = Fuse.Elements.Alignment.Right;
        temp2.Bindings.Add(temp53);
        topPanelRect.CornerRadius = float4(5f, 5f, 5f, 5f);
        topPanelRect.Layer = Fuse.Layer.Background;
        topPanelRect.Name = __selector11;
        topPanelRect.Fills.Add(temp3);
        topPanelRect.Children.Add(temp54);
        topPanelRect.Bindings.Add(temp55);
        temp3.WrapMode = Fuse.Drawing.WrapMode.ClampToEdge;
        temp3.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        bottomPanel.Width = new Uno.UX.Size(70f, Uno.UX.Unit.Percent);
        bottomPanel.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Percent);
        bottomPanel.Opacity = 0f;
        bottomPanel.Name = __selector12;
        bottomPanel.Children.Add(temp56);
        bottomPanel.Children.Add(bottomPanelScaling);
        bottomPanel.Children.Add(temp58);
        temp56.CornerRadius = float4(5f, 5f, 5f, 5f);
        temp56.Color = float4(0.9333333f, 0.9333333f, 0.9333333f, 1f);
        temp56.Layer = Fuse.Layer.Background;
        temp56.Children.Add(temp57);
        bottomPanelScaling.X = 0.85f;
        bottomPanelScaling.Y = 0.8f;
        bottomPanelScaling.Name = __selector13;
        temp58.Rows = "20,20,1*";
        temp58.ColumnCount = 2;
        temp58.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Percent);
        temp58.Alignment = Fuse.Elements.Alignment.Bottom;
        temp58.Padding = float4(20f, 10f, 20f, 10f);
        temp58.Children.Add(temp4);
        temp58.Children.Add(temp5);
        temp58.Children.Add(temp61);
        temp58.Children.Add(temp68);
        temp4.FontSize = 14f;
        temp4.Color = float4(0.2666667f, 0.2666667f, 0.2666667f, 1f);
        global::Fuse.Controls.Grid.SetRow(temp4, 0);
        global::Fuse.Controls.Grid.SetColumn(temp4, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(temp4, 2);
        temp4.Bindings.Add(temp59);
        temp5.FontSize = 14f;
        temp5.Color = float4(0.2666667f, 0.2666667f, 0.2666667f, 1f);
        temp5.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        global::Fuse.Controls.Grid.SetRow(temp5, 1);
        global::Fuse.Controls.Grid.SetColumn(temp5, 0);
        temp5.Bindings.Add(temp60);
        temp61.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp61.Alignment = Fuse.Elements.Alignment.CenterRight;
        global::Fuse.Controls.Grid.SetRow(temp61, 1);
        global::Fuse.Controls.Grid.SetColumn(temp61, 1);
        temp61.Children.Add(temp62);
        temp61.Children.Add(temp65);
        temp62.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp62.Children.Add(temp6);
        temp6.Templates.Add(temp63);
        temp6.Bindings.Add(temp64);
        temp65.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp65.Children.Add(temp7);
        temp7.Templates.Add(temp66);
        temp7.Bindings.Add(temp67);
        temp68.ColumnCount = 2;
        global::Fuse.Controls.Grid.SetRow(temp68, 2);
        global::Fuse.Controls.Grid.SetColumn(temp68, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(temp68, 2);
        temp68.Children.Add(temp69);
        temp68.Children.Add(temp72);
        temp69.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp69.Children.Add(temp8);
        temp8.Templates.Add(temp70);
        temp8.Bindings.Add(temp71);
        temp72.ItemSpacing = 2f;
        temp72.Alignment = Fuse.Elements.Alignment.CenterRight;
        temp72.Children.Add(temp73);
        temp72.Children.Add(temp74);
        temp72.Children.Add(temp75);
        temp73.Color = float4(0.6666667f, 0.6666667f, 0.6666667f, 1f);
        temp73.Width = new Uno.UX.Size(4f, Uno.UX.Unit.Unspecified);
        temp73.Height = new Uno.UX.Size(4f, Uno.UX.Unit.Unspecified);
        temp74.Color = float4(0.6666667f, 0.6666667f, 0.6666667f, 1f);
        temp74.Width = new Uno.UX.Size(4f, Uno.UX.Unit.Unspecified);
        temp74.Height = new Uno.UX.Size(4f, Uno.UX.Unit.Unspecified);
        temp75.Color = float4(0.6666667f, 0.6666667f, 0.6666667f, 1f);
        temp75.Width = new Uno.UX.Size(4f, Uno.UX.Unit.Unspecified);
        temp75.Height = new Uno.UX.Size(4f, Uno.UX.Unit.Unspecified);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(pageScaling);
        __g_nametable.Objects.Add(swipe);
        __g_nametable.Objects.Add(topPanel);
        __g_nametable.Objects.Add(topPanelRect);
        __g_nametable.Objects.Add(bottomPanel);
        __g_nametable.Objects.Add(bottomPanelScaling);
        this.Children.Add(pageScaling);
        this.Children.Add(temp27);
        this.Children.Add(temp30);
        this.Children.Add(temp32);
        this.Children.Add(swipe);
        this.Children.Add(temp34);
        this.Children.Add(temp39);
        this.Children.Add(topPanel);
        this.Children.Add(bottomPanel);
    }
    static global::Uno.UX.Selector __selector0 = "Opacity";
    static global::Uno.UX.Selector __selector1 = "Factor";
    static global::Uno.UX.Selector __selector2 = "X";
    static global::Uno.UX.Selector __selector3 = "Y";
    static global::Uno.UX.Selector __selector4 = "Value";
    static global::Uno.UX.Selector __selector5 = "File";
    static global::Uno.UX.Selector __selector6 = "Count";
    static global::Uno.UX.Selector __selector7 = "Items";
    static global::Uno.UX.Selector __selector8 = "pageScaling";
    static global::Uno.UX.Selector __selector9 = "swipe";
    static global::Uno.UX.Selector __selector10 = "topPanel";
    static global::Uno.UX.Selector __selector11 = "topPanelRect";
    static global::Uno.UX.Selector __selector12 = "bottomPanel";
    static global::Uno.UX.Selector __selector13 = "bottomPanelScaling";
}
