[Uno.Compiler.UxGenerated]
public partial class Sidebar: Fuse.Controls.StackPanel
{
    internal global::Fuse.Controls.StackPanel user;
    internal global::Fuse.Controls.Grid stats;
    internal global::Fuse.Controls.StackPanel browser;
    internal global::Fuse.Controls.StackPanel feed;
    internal global::Fuse.Controls.StackPanel chat;
    static Sidebar()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Sidebar()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Navigation.WhileInactive();
        var temp1 = new global::Fuse.Animations.Move();
        var temp2 = new global::Fuse.Animations.Move();
        var temp3 = new global::Fuse.Animations.Move();
        var temp4 = new global::Fuse.Animations.Move();
        var temp5 = new global::Fuse.Animations.Move();
        var temp6 = new global::Fuse.Controls.StatusBarBackground();
        var temp7 = new global::Fuse.Drawing.StaticSolidColor(float4(0.5647059f, 0.5803922f, 0.5960785f, 1f));
        user = new global::Fuse.Controls.StackPanel();
        var temp8 = new global::Fuse.Controls.Panel();
        var temp9 = new global::Fuse.Controls.Circle();
        var temp10 = new global::Fuse.Drawing.ImageFill();
        var temp11 = new global::Username();
        stats = new global::Fuse.Controls.Grid();
        var temp12 = new global::Fuse.Controls.StackPanel();
        var temp13 = new global::Stats();
        var temp14 = new global::Relations();
        var temp15 = new global::Fuse.Controls.Rectangle();
        var temp16 = new global::Fuse.Drawing.SolidColor();
        var temp17 = new global::Fuse.Controls.StackPanel();
        var temp18 = new global::Stats();
        var temp19 = new global::Relations();
        var temp20 = new global::Fuse.Controls.StackPanel();
        browser = new global::Fuse.Controls.StackPanel();
        var temp21 = new global::SidebarIcon();
        var temp22 = new global::MenuLabel();
        feed = new global::Fuse.Controls.StackPanel();
        var temp23 = new global::SidebarIcon();
        var temp24 = new global::MenuLabel();
        chat = new global::Fuse.Controls.StackPanel();
        var temp25 = new global::SidebarIcon();
        var temp26 = new global::MenuLabel();
        var temp27 = new global::Fuse.Drawing.StaticSolidColor(float4(0.1294118f, 0.1568628f, 0.1921569f, 1f));
        temp.Threshold = 0.4f;
        temp.Animators.Add(temp1);
        temp.Animators.Add(temp2);
        temp.Animators.Add(temp3);
        temp.Animators.Add(temp4);
        temp.Animators.Add(temp5);
        temp1.X = -180f;
        temp1.Duration = 0.2;
        temp1.Delay = 0.3;
        temp1.Target = user;
        temp1.Easing = Fuse.Animations.Easing.CircularIn;
        temp2.X = -180f;
        temp2.Duration = 0.2;
        temp2.Delay = 0.2;
        temp2.Target = stats;
        temp2.Easing = Fuse.Animations.Easing.CircularIn;
        temp3.X = -180f;
        temp3.Duration = 0.2;
        temp3.Delay = 0.15;
        temp3.Target = browser;
        temp3.Easing = Fuse.Animations.Easing.CircularIn;
        temp4.X = -180f;
        temp4.Duration = 0.2;
        temp4.Delay = 0.1;
        temp4.Target = feed;
        temp4.Easing = Fuse.Animations.Easing.CircularIn;
        temp5.X = -180f;
        temp5.Duration = 0.2;
        temp5.Delay = 0.05;
        temp5.Target = chat;
        temp5.Easing = Fuse.Animations.Easing.CircularIn;
        temp6.Background = temp7;
        user.Name = __selector0;
        user.Children.Add(temp8);
        user.Children.Add(temp9);
        user.Children.Add(temp11);
        temp8.Height = new Uno.UX.Size(90f, Uno.UX.Unit.Unspecified);
        temp9.Width = new Uno.UX.Size(85f, Uno.UX.Unit.Unspecified);
        temp9.Height = new Uno.UX.Size(85f, Uno.UX.Unit.Unspecified);
        temp9.Fills.Add(temp10);
        temp10.Url = "http://az664292.vo.msecnd.net/files/B2MmOFAy2wjpUo71-model-045.jpg";
        temp10.WrapMode = Fuse.Drawing.WrapMode.ClampToEdge;
        temp11.Value = "EDWARD PRICE";
        stats.ColumnCount = 3;
        stats.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        stats.Margin = float4(0f, 10f, 0f, 15f);
        stats.Name = __selector1;
        stats.Children.Add(temp12);
        stats.Children.Add(temp15);
        stats.Children.Add(temp17);
        temp12.Width = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp14);
        temp13.Value = "2,342";
        temp14.Value = "Followers";
        temp15.Width = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp15.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp15.Fills.Add(temp16);
        temp16.Color = float4(0.254902f, 0.3098039f, 0.3686275f, 1f);
        temp17.Width = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp17.Children.Add(temp18);
        temp17.Children.Add(temp19);
        temp18.Value = "3,735";
        temp19.Value = "Following";
        temp20.Children.Add(browser);
        temp20.Children.Add(feed);
        temp20.Children.Add(chat);
        browser.Name = __selector2;
        browser.Children.Add(temp21);
        browser.Children.Add(temp22);
        temp21.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/Browser.png"));
        temp22.Value = "NEWS";
        feed.Name = __selector3;
        feed.Children.Add(temp23);
        feed.Children.Add(temp24);
        temp23.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/Feed.png"));
        temp24.Value = "FEED";
        chat.Name = __selector4;
        chat.Children.Add(temp25);
        chat.Children.Add(temp26);
        temp25.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Icons/Chat.png"));
        temp26.Value = "CHAT";
        this.Background = temp27;
        this.Children.Add(temp);
        this.Children.Add(temp6);
        this.Children.Add(user);
        this.Children.Add(stats);
        this.Children.Add(temp20);
    }
    static global::Uno.UX.Selector __selector0 = "user";
    static global::Uno.UX.Selector __selector1 = "stats";
    static global::Uno.UX.Selector __selector2 = "browser";
    static global::Uno.UX.Selector __selector3 = "feed";
    static global::Uno.UX.Selector __selector4 = "chat";
}
