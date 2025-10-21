# <span id="top">Rosetta Code Examples</span> <span style="font-size:90%;">[⬆](../README.md)</span>

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

## <span id="AryLen">`AryLen` Example</span>

This project has the following directory structure :

<pre style="font-size:80%;">
<b>&gt; <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/tree">tree</a> /a /f . | <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/findstr">findstr</a> /v /b [A-Z]</b>
|   <a href="./AryLen/build.bat">build.bat</a>
\---<b>src</b>
    \---<b>main</b>
        \---<b>cp</b>
                <a href="./AryLen/src/main/cp/AryLen.cp">AryLen.cp</a>
</pre>

Command [**`build clean run`**](./AryLen/build.bat) produces the following output for project [**`AryLen`**](./AryLen/):

<pre style="font-size:80%;">
<b>&gt; <a href="./AryLen/build.bat">build</a> -verbose clean run</b>
Delete directory "target"
Compile 1 Component Pascal source file to directory "H:\rosetta-examples\AryLen\target" (DotNet)
Execute main program "AryLen.exe"
Length:> 3
</pre>

The output directory `target\` looks as follows :

<pre style="font-size:80%;">
<b>&gt; <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/tree">tree</a> /a /f target | <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/findstr">findstr</a> /v /b [A-Z]</b>
    AryLen.cps
    AryLen.exe
    AryLen.il
    AryLen.pdb
    RTS.dll
</pre>

## <span id="DrivePoint">`DrivePoint` Example</span>

This project has the following directory structure :

<pre style="font-size:80%;">
<b>&gt; <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/tree" rel="external">tree</a> /a /f . | <a href="https://learn.microsoft.com/en-us/windows-server/administration/windows-commands/findstr" rel="external">findstr</a> /v /b [A-Z]</b>
|   <a href="./DrivePoint/build.bat">build.bat</a>
\---<b>src</b>
    \---<b>main</b>
        \---<b>cp</b>
                <a href="./DrivePoint/src/main/cp/DrivePoint.cp">DrivePoint.cp</a>
                <a href="./DrivePoint/src/main/cp/Point.cp">Point.cp</a>
</pre>

Command [**`build clean run`**](./DrivePoint/build.bat) produces the following output for project [**`DrivePoint`**](./DrivePoint/):

<pre style="font-size:80%;">

</pre>

The output directory `target\` looks as follows :

<pre style="font-size:80%;">
</pre>

<!--=================================================================================-->

## <span id="footnotes">Footnotes</span> [**&#x25B4;**](#top)

<span id="footnote_01">[1]</span> ***Garden Point Component Pascal for JVM*** [↩](#anchor_01)

<dl><dd>
<pre style="font-size:80%;">
<b>&gt; C:\opt\gpcp-JVM-1.4.07\bin\j2cps.bat" -help</b>
j2cps version 1.4.07 (March 2018)
Usage:
java [VM-opts] j2cps.j2cps [options] PackageNameOrJarFile
java [VM-opts] -jar j2cps.jar [options] PackageNameOrJarFile
J2cps options may be in any order.
  -d[st] dir => symbol file destination directory
  -p[kg] dir => package-root directory
  -jar       => process the named jar file
  -s[ummary] => summary of progress
  -v[erbose] => verbose diagnostic messages
  -version   => show version string
  -nocpsym   => only use sym-files from destination,
                (overrides any CPSYM path setting)
No package-name or jar filename given, terminating
</pre>
</dd></dl>

***

*[mics](https://lampwww.epfl.ch/~michelou/)/October 2025* [**&#9650;**](#top)  <!-- May 2024 -->
<span id="bottom">&nbsp;</span>

<!-- link refs -->
