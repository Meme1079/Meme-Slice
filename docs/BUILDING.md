# Dependencies
- [git](https://git-scm.com/downloads)
- [Haxe 4.3.7](https://haxe.org/download/)
- Microsoft Visual Studio Community 2022 (Windows only)
- VLC (Linux only)

# HaxeLib
> [!NOTE]
> If you want to install a specific version of Haxe's default libraries (like Flixel for example), use haxelib set library version, here's an example: haxelib set flixel `5.6.1`.

<details><summary>Haxe Libraries:</summary>
<p>

- flixel: 6.1.0
- flixel-addons: 3.3.0
- flixel-tools: 1.5.1
- flixel-ui: 2.6.4
- hxvlc: 2.0.1
- lime: 8.2.2
- openfl: 9.4.1
- tjson: 1.4.0
- hxdiscord_rpc: 1.2.4
- hxcpp-debug-server: 1.2.4
- hscript-iris: 1.1.3
- flxanimate
- linc_luajit
- funkin.vis
- grig.audio

<details><summary>Install Everything here:</summary>
<p>

```bash
haxelib install flixel 6.1.0
haxelib install flixel-addons 3.3.0
haxelib install flixel-tools 1.5.1
haxelib install flixel-ui 2.6.4
haxelib install hxvlc 2.0.1
haxelib install lime 8.2.2
haxelib install openfl 9.4.1
haxelib install tjson 1.4.0
haxelib install hxdiscord_rpc 1.2.4
haxelib install hxcpp-debug-server 1.2.4
haxelib install hscript-iris 1.1.3
haxelib git flxanimate https://github.com/Dot-Stuff/flxanimate 768740a56b26aa0c072720e0d1236b94afe68e3e
haxelib git linc_luajit https://github.com/superpowers04/linc_luajit.git
haxelib git funkin.vis https://github.com/FunkinCrew/funkVis 22b1ce089dd924f15cdc4632397ef3504d464e90
haxelib git grig.audio https://gitlab.com/haxe-grig/grig.audio.git cbf91e2180fd2e374924fe74844086aab7891666
```

</p>
</details>

</p>
</details>

***

> [!NOTE]
> _This section is for Window users only, Mac users can skip this section._

After installing `git`, open a command prompt window and enter the following:

```batch
curl -# -O https://download.visualstudio.microsoft.com/download/pr/3105fcfe-e771-41d6-9a1c-fc971e7d03a7/8eb13958dc429a6e6f7e0d6704d43a55f18d02a253608351b6bf6723ffdaf24e/vs_Community.exe
vs_Community.exe --add Microsoft.VisualStudio.Component.VC.Tools.x86.x64 --add Microsoft.VisualStudio.Component.Windows10SDK.19041 -p
```

This will use `curl`, which is a tool for downloading certain files through your command prompt,
to download the binary for Microsoft Visual Studio with the specific packages you need for compiling on Windows.

(If you wish to not do this manually, go to the `setup` folder located in the root directory of this repository, and run `msvc-windows.bat`)

***

# Running
After you've done all of that, just run this command on the terminal.

```bash
lime test <platform>
```

Replace the platform with the current operating system your using (i.e. `windows`, `mac`, & `linux`).