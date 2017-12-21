[Uno.Compiler.UxGenerated]
public partial class HorizontalBar: Fuse.Controls.Panel
{
    static HorizontalBar()
    {
    }
    [global::Uno.UX.UXConstructor]
    public HorizontalBar()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Rectangle();
        this.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        this.Margin = float4(0f, 10f, 0f, 0f);
        temp.Color = float4(1f, 1f, 1f, 1f);
        temp.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        this.Children.Add(temp);
    }
}
