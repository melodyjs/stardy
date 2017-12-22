[Uno.Compiler.UxGenerated]
public partial class TaskItem: Fuse.Controls.DockPanel
{
    global::Uno.UX.Property<Uno.UX.FileSource> temp_File_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    static TaskItem()
    {
    }
    [global::Uno.UX.UXConstructor]
    public TaskItem()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Image();
        temp_File_inst = new stardy_FuseControlsImage_File_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("image");
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp1, __selector1);
        var temp4 = new global::Fuse.Reactive.Data("text");
        var temp2 = new global::Fuse.Controls.Text();
        temp2_Value_inst = new stardy_FuseControlsTextControl_Value_Property(temp2, __selector1);
        var temp5 = new global::Fuse.Reactive.Data("timeSlot");
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_File_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp7 = new global::Fuse.Controls.Grid();
        var temp8 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp9 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        this.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        this.Margin = float4(1f, 1f, 1f, 1f);
        this.Padding = float4(15f, 20f, 15f, 20f);
        temp.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp, Fuse.Layouts.Dock.Left);
        temp.Bindings.Add(temp6);
        temp7.RowCount = 2;
        temp7.Margin = float4(40f, 0f, 40f, 0f);
        temp7.Children.Add(temp1);
        temp7.Children.Add(temp2);
        temp1.Bindings.Add(temp8);
        temp2.Color = float4(0.6f, 0.6f, 0.6f, 1f);
        temp2.Bindings.Add(temp9);
        this.Background = temp10;
        this.Children.Add(temp);
        this.Children.Add(temp7);
    }
    static global::Uno.UX.Selector __selector0 = "File";
    static global::Uno.UX.Selector __selector1 = "Value";
}
