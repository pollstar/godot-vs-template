<H3>Requirements:</H3>
<p>1. Install <b>Python</b>, version 3.6 or higher (https://www.python.org/downloads/)<BR>
Attention!!! During the Python installation process, you need to set the "Add to PATH" flag.<BR></p>
<p>2. Install <b>scons</b> (https://scons.org/doc/production/HTML/scons-man.html)<BR>
<i>pip install scons</i><BR></p>
 
<H3>To work with this template</H3>
1. Clone repository<BR>
<i>git clone https://github.com/pollstar/godot-vs-template.git<BR>
cd  godot-vs-template<BR>
cd godot-cpp<BR>
git submodule update --init<BR>
scons platform=windows generate_bindings=yes target=template_release<BR>
scons platform=windows generate_bindings=yes target=template_debug<BR>
cd ..<BR></i>
2. Unzip Godot_v4.1.2-stable_win64.exe to <b>godot</b> directory <BR>
3. Star VS, and open <b>sln</b> file<BR>
4. Build project<BR>
5. Start project from VS<BR>
6. Select <b>gd_scene_sprite.tscn</b> from FileSystem in Godot<BR>
<BR>

<BR><b>TYPED_METHOD_BIND</b> need add to preprocessor in VS, for binding your property