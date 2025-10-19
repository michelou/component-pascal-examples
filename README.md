# <span id="top">Playing with Component Pascal on Windows</span>

<table style="font-family:Helvetica,Arial;line-height:1.6;">
  <tr>
  <td style="border:0;padding:0 10px 0 0;min-width:25%;"><a href="https://en.wikipedia.org/wiki/Component_Pascal" rel="external"><img src="./docs/images/cpascal.png" width="100" alt="Component Pascal project"/></a></td>
  <td style="border:0;padding:0;vertical-align:text-top;">This repository gathers <a href="https://en.wikipedia.org/wiki/Component_Pascal" rel="external">Component Pascal</a> code examples coming from various websites and books.<br/>
  It also includes several build scripts (<a href="https://en.wikibooks.org/wiki/Windows_Batch_Scripting" rel="external">batch files</a>, <a href="https://docs.gradle.org/current/userguide/writing_build_scripts.html" rel="external">Gradle scripts</a>) for experimenting with <a href="https://en.wikipedia.org/wiki/Component_Pascal" rel="external">Component Pascal</a> on a Windows machine.
  </td>
  </tr>
</table>

[Ada][ada_examples], [Akka][akka_examples], [C++][cpp_examples], [COBOL][cobol_examples], [Dafny][dafny_examples], [Dart][dart_examples], [Deno][deno_examples], [Erlang][erlang_examples], [Flix][flix_examples], [Golang][golang_examples], [GraalVM][graalvm_examples], [Haskell][haskell_examples], [Kafka][kafka_examples], [Kotlin][kotlin_examples], [LLVM][llvm_examples], [Modula-2][m2_examples], [Node.js][nodejs_examples], [Rust][rust_examples], [Scala 3][scala3_examples], [Spark][spark_examples], [Spring][spring_examples], [Standard ML][sml_examples], [TruffleSqueak][trufflesqueak_examples], [WiX Toolset][wix_examples] and [Zig][zig_examples] are other topics we are continuously monitoring.

## <span id="proj_deps">Project dependencies</span>

This project depends on the following external software for the **Microsoft Windows** platform:

- [Gardens Point Component Pascal 1.4][gpcp_downloads]
- [Git 2.51][git_downloads] ([*release notes*][git_relnotes])
- [Oracle Java RE 8u271][jre_8u271] ([*release notes*][jre_8u271_relnotes])

Optionally one may also install the following software:

- [ConEmu][conemu_downloads] ([*release notes*][conemu_relnotes])
- [Visual Studio Code 1.105][vscode_downloads] ([*release notes*][vscode_relnotes])

> **&#9755;** ***Installation policy***<br/>
> When possible we install software from a [Zip archive][zip_archive] rather than via a Windows installer. In our case we defined **`C:\opt\`** as the installation directory for optional software tools (*in reference to* the [**`/opt/`**][linux_opt] directory on Unix).

For instance our development environment looks as follows (*October 2025*) <sup id="anchor_04">[4](#footnote_04)</sup>:

<pre style="font-size:80%;">
C:\opt\ConEmu\            <i>( 26 MB)</i>
C:\opt\Git\               <i>(367 MB)</i>
C:\opt\gpcp-JVM-1.4.07\   <i>( 20 MB)</i>
C:\opt\gpcp-NET-1.4.08\   <i>( 22 MB)</i>
C:\opt\VSCode\            <i>(341 MB)</i>
</pre>

> **:mag_right:** [Git for Windows][git_downloads] provides a BASH emulation used to run [**`git.exe`**][git_cli] from the command line (as well as over 250 Unix commands like [**`awk`**][man1_awk], [**`diff`**][man1_diff], [**`file`**][man1_file], [**`grep`**][man1_grep], [**`more`**][man1_more], [**`mv`**][man1_mv], [**`rmdir`**][man1_rmdir], [**`sed`**][man1_sed] and [**`wc`**][man1_wc]).

## <span id="structure">Directory structure</span> [**&#x25B4;**](#top)

This project is organized as follows:
<pre style="font-size:80%;">
<a href="bin/">bin\</a>
<a href="docs/">docs\</a>
<a href="examples/">examples\</a>
README.md
<a href="RESOURCES.md">RESOURCES.md</a>
<a href="setenv.bat">setenv.bat</a>
</pre>

where

- directory [**`bin\`**](bin/) contains .
- directory [**`docs\`**](docs/) contains [Ada] related documents.
- directory [**`examples\`**](examples/) contains [Ada] code examples grabbed from various websites.
- file [**`README.md`**](README.md) is the [Markdown][github_markdown] document for this page.
- file [**`RESOURCES.md`**](RESOURCES.md) gathers [Ada] related informations.
- file [**`setenv.bat`**](setenv.bat) is the batch script for setting up our environment.

[CP IDE](https://www.astrobe.com/CPIde/CPIde.htm)

<pre style="font-size:80%;">
<b>&gt; <a href="./setenv.bat">setenv</a> -verbose</b>
Select drive G: for which a substitution already exists
Tool versions:
   javac 1.8.0_422, java 1.8.0_422, gpcp 1.4.08b3, j2cps 1.4.07,
   git 2.51.0, diff 3.12, bash 5.2.37(1)-release
Tool paths:
   C:\opt\jdk-temurin-1.8.0u412-b08\bin\javac.exe
   C:\opt\jdk-temurin-1.8.0u412-b08\bin\java.exe
   C:\opt\gpcp-NET-1.4.08\bin\gpcp.exe
   C:\opt\Git\bin\git.exe
   C:\opt\Git\usr\bin\diff.exe
   C:\opt\Git\bin\bash.exe
Environment variables:
   "GIT_HOME=C:\opt\Git"
   "GPCP_HOME=C:\opt\gpcp-NET-1.4.08"
   "JAVA_HOME=C:\opt\jdk-temurin-1.8.0u412-b08"
   "JROOT=C:\opt\gpcp-JVM-1.4.07"
Path associations:
   G:\: => %USERPROFILE%\workspace-perso\cpascal-examples
</pre>

<pre style="font-size:80%;">
<b>&gt; C:\opt\gpcp-JVM-1.4.07\bin\gpcp.bat -help</b>
gardens point component pascal:  version 1.4.07 of 04 March 2018
#gpcp: Usage from the command line ...
       $ gpcp [cp-options] file {file}
# CP Options ...
  General Options ---
       -copyright   ==> Display copyright notice
       -dostats     ==> Give a statistical summary
       -help        ==> Write out this usage message
       -list        ==> (default) Create *.lst file if errors
       -list+       ==> Unconditionally create *.lst file
       -list-       ==> Don't create error *.lst file
       -quiet       ==> Compile silently if possible
       -verbose     ==> Emit verbose diagnostics
       -version     ==> Write out version number
       -warn-       ==> Don't emit warnings
       -nowarn      ==> Don't emit warnings
  Environment Options ---
       -clsdir:XXX  ==> Set class tree root in directory XXX
       -cpsym:XXX   ==> Use environ. variable XXX instead of CPSYM
       -hsize:NNN   ==> Set hashtable size >= NNN (0 .. 65000)
       -special     ==> Compile dummy symbol file
       -strict      ==> Disallow non-standard constructs
  Output Options ---
       -noasm       ==> Don't create asm (or object) files
       -nocode      ==> Don't create any object files
       -nosym       ==> Don't create *.sym (or asm or object) files
       -symdir:XXX  ==> Place symbol files in directory XXX
       -xmlerror    ==> Emit error messages in XML format
  Code Generation Options ---
       -asm7        ==> Default: Generate class files with V1_7 format
       -asmN        ==> Classfiles use V1_N format, N = (5 .. 8)
       -jasmin      ==> Create jasmin asm files (but do not run Jasmin)
       -legacy      ==> Use the pre-v1.4 jvm class writer
       -target:XXX  ==> Emit (jvm|net) assembly
# Java Options ...
       -D<name>=<value>  pass <value> to JRE as system property <name>
       -DCPSYM=%CPSYM%   pass value of CPSYM environment variable to JRE
#gpcp: This program comes with NO WARRANTY
#gpcp: Read source/GPCPcopyright for license details
#gpcp: No input files specified
</pre>

***

*[mics](https://lampwww.epfl.ch/~michelou/)/October 2025* [**&#9650;**](#top)  <!-- June 2024 -->
<span id="bottom">&nbsp;</span>

<!-- link refs -->

[ada_examples]: https://github.com/michelou/ada-examples#top
[akka_examples]: https://github.com/michelou/akka-examples#top
[cobol_examples]: https://github.com/michelou/cobol-examples#top
[conemu_downloads]: https://github.com/Maximus5/ConEmu/releases
[conemu_relnotes]: https://conemu.github.io/blog/2023/07/24/Build-230724.html
[cpp_examples]: https://github.com/michelou/cpp-examples#top
[dafny_examples]: https://github.com/michelou/dafny-examples#top
[dart_examples]: https://github.com/michelou/dart-examples#top
[deno_examples]: https://github.com/michelou/deno-examples#top
[erlang_examples]: https://github.com/michelou/erlang-examples#top
[flix_examples]: https://github.com/michelou/flix-examples#top
[git_cli]: https://git-scm.com/docs/git
[git_downloads]: https://git-scm.com/download/win
[git_relnotes]: https://raw.githubusercontent.com/git/git/master/Documentation/RelNotes/2.45.1.txt
[github_markdown]: https://github.github.com/gfm/
[golang_examples]: https://github.com/michelou/golang-examples#top
[gpcp_downloads]: https://github.com/k-john-gough/gpcp/releases
[graalvm_examples]: https://github.com/michelou/graalvm-examples#top
[gradle_cli]: https://docs.gradle.org/current/userguide/command_line_interface.html
[gradle_compatibility]: https://docs.gradle.org/current/release-notes.html#upgrade-instructions
[gradle_install]: https://gradle.org/install/
[gradle_latest]: https://gradle.org/releases/
[gradle_relnotes]: https://docs.gradle.org/8.0/release-notes.html
[haskell_examples]: https://github.com/michelou/haskell-examples#top
[kafka_examples]: https://github.com/michelou/kafka-examples#top
[kotlin_examples]: https://github.com/michelou/kotlin-examples#top
[linux_opt]: https://tldp.org/LDP/Linux-Filesystem-Hierarchy/html/opt.html
[llvm_examples]: https://github.com/michelou/llvm-examples#top
[m2_examples]: https://github.com/michelou/m2-examples#top
[man1_awk]: https://www.linux.org/docs/man1/awk.html
[man1_diff]: https://www.linux.org/docs/man1/diff.html
[man1_file]: https://www.linux.org/docs/man1/file.html
[man1_grep]: https://www.linux.org/docs/man1/grep.html
[man1_more]: https://www.linux.org/docs/man1/more.html
[man1_mv]: https://www.linux.org/docs/man1/mv.html
[man1_rmdir]: https://www.linux.org/docs/man1/rmdir.html
[man1_sed]: https://www.linux.org/docs/man1/sed.html
[man1_wc]: https://www.linux.org/docs/man1/wc.html
[maven_latest]: https://maven.apache.org/download.cgi
[maven_relnotes]: https://maven.apache.org/docs/3.9.11/release-notes.html
[nodejs_examples]: https://github.com/michelou/nodejs-examples#top
[rust_examples]: https://github.com/michelou/rust-examples#top
[scala3_examples]: https://github.com/michelou/dotty-examples#top
[golang_examples]: https://github.com/michelou/sml-examples#top
[sml_examples]: https://github.com/michelou/sml-examples#top
[spark_examples]: https://github.com/michelou/spark-examples#top
[spring]: https://spring.io/
[spring_boot_downloads]: https://mvnrepository.com/artifact/org.springframework.boot/spring-boot
[spring_boot_relnotes]: https://github.com/spring-projects/spring-boot/wiki/Spring-Boot-3.0-Release-Notes
[spring_examples]: https://github.com/michelou/spring-examples#top
[jre_8u271]: https://www.oracle.com/java/technologies/javase/javase8u211-later-archive-downloads.html
[jre_8u271_relnotes]: https://www.oracle.com/java/technologies/javase/8u271-relnotes.html
[temurin_openjdk11_bugfixes]: https://www.oracle.com/java/technologies/javase/11-0-15-bugfixes.html
[temurin_openjdk11_relnotes]: https://mail.openjdk.java.net/pipermail/jdk-updates-dev/2021-October/009368.html
[temurin_openjdk11]: https://adoptium.net/releases.html?variant=openjdk11&jvmVariant=hotspot
[temurin_openjdk17]: https://adoptium.net/releases.html?variant=openjdk17&jvmVariant=hotspot
[temurin_openjdk17_bugfixes]: https://www.oracle.com/java/technologies/javase/17-0-1-bugfixes.html
[temurin_openjdk17_relnotes]: https://github.com/openjdk/jdk/compare/jdk-17%2B20...jdk-17%2B21
[trufflesqueak_examples]: https://github.com/michelou/trufflesqueak-examples#top
[unix_opt]: https://tldp.org/LDP/Linux-Filesystem-Hierarchy/html/opt.html
[vscode_downloads]: https://code.visualstudio.com/#alt-downloads
[vscode_relnotes]: https://code.visualstudio.com/updates
[windows_installer]: https://docs.microsoft.com/en-us/windows/win32/msi/windows-installer-portal
[windows_limitation]: https://support.microsoft.com/en-gb/help/830473/command-prompt-cmd-exe-command-line-string-limitation
[windows_subst]: https://docs.microsoft.com/en-us/windows-server/administration/windows-commands/subst
[wix_examples]: https://github.com/michelou/wix-examples#top
[zig_examples]: https://github.com/michelou/zig-examples#top
[zip_archive]: https://www.howtogeek.com/178146/htg-explains-everything-you-need-to-know-about-zipped-files/
