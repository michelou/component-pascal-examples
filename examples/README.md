# <span id="top">Component Pascal Examples</span> <span style="font-size:90%;">[⬆](../README.md)</span>

<table style="font-family:Helvetica,Arial;line-height:1.6;">
  <tr>
  <td style="border:0;padding:0 10px 0 0;min-width:120px;">
    <a href="https://en.wikipedia.org/wiki/Component_Pascal" rel="external"><img style="border:0;width:120px;" src="../docs/images/component-pascal.png" alt="CP project" /></a>
  </td>
  <td style="border:0;padding:0;vertical-align:text-top;">
    Directory <strong><code>examples\</code></strong> contains <a href="https://en.wikipedia.org/wiki/Component_Pascal" rel="external">Component Pascal</a> code examples coming from various websites - mostly from the <a href="https://en.wikipedia.org/wiki/Component_Pascal" rel="external">Component Pascal project</a>.
  </td>
  </tr>
</table>

## <span id="hello">`Hello` Example</span>

This project has the following directory structure :

<pre style="font-size:80%;">
<b>&gt; <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/tree">tree</a> /a /f . | <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/findstr">findstr</a> /v /b [A-Z]</b>
|   <a href="./Hello/build.bat">build.bat</a>
\---<b>src</b>
    \---<b>main</b>
        \---<b>cp</b>
                <a href="./Hello/src/main/cp/Hello.cp">Hello.cp</a>
</pre>

The target is specified using the two build options `-net` (default) and `-jvm` :

<pre style="font-size:80%;">
<b>&gt; <a href="./Hello/build.bat">build</a> -verbose clean run</b>
Compile 1 Component Pascal source file to directory "H:\examples\Hello\target" (DotNet)
Execute main program "Hello.exe"
Hello CP World
&nbsp;
<b>&gt; <a href="./Hello/build.bat">build</a> -verbose -jvm clean run</b>
Delete directory "target"
Compile 1 Component Pascal source file to directory "H:\examples\Hello\target\classes"
Execute main program "CP.Hello.Hello"
Hello CP World
</pre>

## <span id="helloworld">`HelloWorld` Example</span>

This project has the following directory structure :

<pre style="font-size:80%;">
<b>&gt; <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/tree">tree</a> /a /f . | <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/findstr">findstr</a> /v /b [A-Z]</b>
|   <a href="./HelloWorld/build.bat">build.bat</a>
\---<b>src</b>
    \---<b>main</b>
        \---<b>cp</b>
                <a href="./HelloWorld/src/main/cp/HelloWorld.cp">HelloWorld.cp</a>
</pre>

<!--=======================================================================-->

## <span id="jvmparams">`JvmParams` Example</span>

This project has the following directory structure :

<pre style="font-size:80%;">
<b>&gt; <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/tree">tree</a> /a /f . | <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/findstr">findstr</a> /v /b [A-Z]</b>
|   <a href="./JvmParams/build.bat">build.bat</a>
\---<b>src</b>
    \---<b>main</b>
        \---<b>cp</b>
                <a href="./JvmParams/src/main/cp/JvmParams.cp">JvmParams.cp</a>
</pre>

<!--=======================================================================-->

## <span id="typenames">`TypeNames` Example</span>

This project has the following directory structure :

<pre style="font-size:80%;">
<b>&gt; <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/tree">tree</a> /a /f . | <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/findstr">findstr</a> /v /b [A-Z]</b>
|   <a href="./TypeNames/build.bat">build.bat</a>
\---<b>src</b>
    \---<b>main</b>
        \---<b>cp</b>
                <a href="./TypeNames/src/main/cp/TypeNames.cp">TypeNames.cp</a>
</pre>

Command [**`build -jvm clean run`**](./TypeNames//build.bat) (targeting JVM) produces the following output for project [**`TypeNames`**](./TypeNames/):

<pre style="font-size:80%;">
<b>&gt; <a href="./TypeNames/build.bat">build</a> -verbose -jvm clean run</b>
Delete directory "target"
Compile 1 Component Pascal source file to directory "H:\examples\TypeNames\target\classes"
Execute main program "CP.TypeNames.TypeNames"
Implementation type for ARRAY 4,5 OF CHAR
char[][]

Implementation type of string in Object variable
String

Implementation type of NativeType in Object variable
Class

Implementation type of Object in Object variable
Class

Implementation type for INTEGER
int

Implementation type for ARRAY 16 OF CHAR
char[]

Implementation type for RecF = RECORD ... END
TypeNames_RecF

Implementation type for b field of RecF (SHORTREAL)
float
</pre>

<!--=======================================================================-->

## <span id="vectors">`Vectors` Example</span>

This project has the following directory structure :

<pre style="font-size:80%;">
<b>&gt; <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/tree">tree</a> /a /f . | <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/findstr">findstr</a> /v /b [A-Z]</b>
|   <a href="./Vectors/build.bat">build.bat</a>
\---<b>src</b>
    \---<b>main</b>
        \---<b>cp</b>
                <a href="./Vectors/src/main/cp/Vectors.cp">Vectors.cp</a>
</pre>

Command [**`build clean run`**](./Vectors/build.bat) produces the following output for project [**`Vectors`**](./Vectors/):

<pre style="font-size:80%;">
<b>&gt; <a href="./Vectors/build.bat">build</a> -verbose clean run</b>
Compile 1 Component Pascal source file to directory "H:\examples\Vectors\target" (DotNet)
Execute main program "Vectors.exe"
Integer Vector
 0 1 3 Original vector
 0 1 3 Entire assign copy
 0 1 3 Elem-by-elem copy
Mutated element 1 of original vector
 0 42 3 Original vector
 0 42 3 Entire assign copy
 0 1 3 Elem-by-elem copy

Character Vector
013 Original vector
013 Entire assign copy
013 Elem-by-elem copy
Mutated element [1] of original vector
0X3 Original vector
0X3 Entire assign copy
013 Elem-by-elem copy

Value Record Vector
{0,1} {2,3} {4,5}  Original vector
{0,1} {2,3} {4,5}  Entire assign copy
{0,1} {2,3} {4,5}  Elem-by-elem copy
Mutate elements of copies
{0,1} {77,3} {4,5}  Original vector
{0,1} {77,3} {4,5}  Entire assign copy
{0,1} {2,3} {4,99}  Elem-by-elem copy

Reference Record Vector
{0,1} {2,3} {4,5}  Original vector
{0,1} {2,3} {4,5}  Entire assign copy
{0,1} {2,3} {4,5}  Elem-by-elem copy
Mutate elements of copies
{0,1} {77,3} {4,99}  Original vector
{0,1} {77,3} {4,99}  Entire assign copy
{0,1} {77,3} {4,99}  Elem-by-elem copy
</pre>

The output directory `target\` looks as follows :

<pre style="font-size:80%;">
<b>&gt; <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/tree" rel="external">tree</a> /a /f target | <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/findstr" rel="external">findstr</a> /v /b [A-Z]</b>
        RTS.dll
        Vectors.cps
        Vectors.exe
        Vectors.il
        Vectors.pdb
</pre>

<!--
## <span id="footnotes">Footnotes</span> <sup><sub>[**&#9650;**](#top)</sub></sup>

<span id="footnote_01">[1]</span> ***Batch files and coding conventions*** [↩](#anchor_01)

<dl><dd>

</dd></dl>
-->

***

*[mics](https://lampwww.epfl.ch/~michelou/)/November 2025* [**&#9650;**](#top)  <!-- May 2024 -->
<span id="bottom">&nbsp;</span>

<!-- link refs -->

[apache_ant_cli]: https://ant.apache.org/manual/running.html
[apache_ant_faq]: https://ant.apache.org/faq.html#ant-name
[apache_ant_ivy]: https://ant.apache.org/ivy/
[apache_ant_ivy_relnotes]: https://ant.apache.org/ivy/history/2.5.2/release-notes.html
[apache_foundation]: https://maven.apache.org/docs/history.html
[apache_history]: https://ant.apache.org/faq.html#history
[apache_maven_about]: https://maven.apache.org/what-is-maven.html
[apache_maven_cli]: https://maven.apache.org/ref/current/maven-embedder/cli.html
[bash]: https://en.wikipedia.org/wiki/Bash_(Unix_shell)
[bazel_cli]: https://docs.bazel.build/versions/master/command-line-reference.html
[cfr_releases]: https://www.benf.org/other/cfr/
[cmd_cli]: https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/cmd
[cygwin]: https://cygwin.com/install.html
[gmake_cli]: http://www.glue.umd.edu/lsf-docs/man/gmake.html
[gradle_groovy]: https://www.groovy-lang.org/
[gradle_app_plugin]: https://docs.gradle.org/current/userguide/application_plugin.html#header
[gradle_cli]: https://docs.gradle.org/current/userguide/command_line_interface.html
[gradle_java_plugin]: https://docs.gradle.org/current/userguide/java_plugin.html
[gradle_plugins]: https://docs.gradle.org/current/userguide/plugins.html
[gradle_wrapper]: https://docs.gradle.org/current/userguide/gradle_wrapper.html
[lightbend]: https://www.lightbend.com/
[microsoft_powershell]: https://docs.microsoft.com/en-us/powershell/scripting/getting-started/getting-started-with-windows-powershell?view=powershell-6
[make]: https://en.wikipedia.org/wiki/Make_(software)
[man1_diff]: https://www.linux.org/docs/man1/diff.html
[mill_cli]: https://www.lihaoyi.com/mill/#command-line-tools
[mvn_cli]: https://maven.apache.org/ref/3.6.3/maven-embedder/cli.html
[msys2]: https://www.msys2.org/
[sbt_cli]: https://www.scala-sbt.org/1.x/docs/Command-Line-Reference.html
[sbt_docs_defs]: https://www.scala-sbt.org/1.0/docs/Basic-Def.html
[scala]: https://www.scala-lang.org/
[scala_cli]: https://scala-cli.virtuslab.org/docs/commands/basics
[scala3_home]: https://dotty.epfl.ch/
[sh_cli]: https://man7.org/linux/man-pages/man1/sh.1p.html
[windows_stderr]: https://support.microsoft.com/en-us/help/110930/redirecting-error-messages-from-command-prompt-stderr-stdout
[zip_archive]: https://www.howtogeek.com/178146/
