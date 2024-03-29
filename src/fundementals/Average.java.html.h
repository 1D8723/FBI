<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html lang = "en">

<head>

<link rel="shortcut icon" href="https://algs4.cs.princeton.edu/favicon.ico">
<link rel="stylesheet"    href="https://algs4.cs.princeton.edu/java.css" type="text/css">

<title>Average.java</title>

<meta HTTP-EQUIV="Content-Type" CONTENT="text/html; charset=iso-8859-1">
<meta NAME="AUTHOR" CONTENT="Robert Sedgewick and Kevin Wayne">
<meta NAME="DESCRIPTION" CONTENT="Average code in Java">
<meta NAME="TITLE" CONTENT="Average code in Java">
<meta NAME="KEYWORDS" CONTENT="Average,java,programming,computer science,algorithm,data structure,program,code">
<meta NAME="ROBOTS" CONTENT="INDEX,FOLLOW">

</head>


<body>
<center><h1>Average.java</h1></center><p><br>

Below is the syntax highlighted version of <a href = "Average.java">Average.java</a>
from <a href = "https://algs4.cs.princeton.edu/11model">&#167;1.1 Programming Model</a>.
<p><br>

<!-- Generator: GNU source-highlight 3.1.8
by Lorenzo Bettini
http://www.lorenzobettini.it
http://www.gnu.org/software/src-highlite -->
<pre><tt><span class="comment">/******************************************************************************</span>
<span class="comment"> *  Compilation:  javac Average.java</span>
<span class="comment"> *  Execution:    java Average &lt; data.txt</span>
<span class="comment"> *  Dependencies: StdIn.java StdOut.java</span>
<span class="comment"> *</span>
<span class="comment"> *  Reads in a sequence of real numbers, and computes their average.</span>
<span class="comment"> *</span>
<span class="comment"> *  % java Average</span>
<span class="comment"> *  10.0 5.0 6.0</span>
<span class="comment"> *  3.0 7.0 32.0</span>
<span class="comment"> *  [Ctrl-d]</span>
<span class="comment"> *  Average is 10.5</span>
<span class="comment"> *</span>
<span class="comment"> *  Note [Ctrl-d] signifies the end of file on Unix.</span>
<span class="comment"> *  On windows use [Ctrl-z].</span>
<span class="comment"> *</span>
<span class="comment"> ******************************************************************************/</span>

<span class="comment">/**</span>
<span class="comment"> *  The {</span><span class="type">@code</span><span class="comment"> Average} class provides a client for reading in a sequence</span>
<span class="comment"> *  of real numbers and printing out their average.</span>
<span class="comment"> *  </span><span class="keyword">&lt;p&gt;</span>
<span class="comment"> *  For additional documentation, see </span><span class="keyword">&lt;a</span><span class="normal"> </span><span class="type">href</span><span class="symbol">=</span><span class="string">"https://algs4.cs.princeton.edu/11model"</span><span class="keyword">&gt;</span><span class="comment">Section 1.1</span><span class="keyword">&lt;/a&gt;</span><span class="comment"> of</span>
<span class="comment"> *  </span><span class="keyword">&lt;i&gt;</span><span class="comment">Algorithms, 4th Edition</span><span class="keyword">&lt;/i&gt;</span><span class="comment"> by Robert Sedgewick and Kevin Wayne.</span>
<span class="comment"> *</span>
<span class="comment"> *  </span><span class="type">@author</span><span class="comment"> Robert Sedgewick</span>
<span class="comment"> *  </span><span class="type">@author</span><span class="comment"> Kevin Wayne</span>
<span class="comment"> */</span>
<span class="keyword">public</span><span class="normal"> </span><span class="keyword">class</span><span class="normal"> </span><span class="classname">Average</span><span class="normal"> </span><span class="cbracket">{</span>

<span class="normal">    </span><span class="comment">// this class should not be instantiated</span>
<span class="normal">    </span><span class="keyword">private</span><span class="normal"> </span><span class="function">Average</span><span class="symbol">()</span><span class="normal"> </span><span class="cbracket">{</span><span class="normal"> </span><span class="cbracket">}</span>

<span class="normal">    </span><span class="comment">/**</span>
<span class="comment">     * Reads in a sequence of real numbers from standard input and prints</span>
<span class="comment">     * out their average to standard output.</span>
<span class="comment">     *</span>
<span class="comment">     * </span><span class="type">@param</span><span class="comment"> args the command-line arguments</span>
<span class="comment">     */</span>
<span class="normal">    </span><span class="keyword">public</span><span class="normal"> </span><span class="keyword">static</span><span class="normal"> </span><span class="type">void</span><span class="normal"> </span><span class="function">main</span><span class="symbol">(</span><span class="normal">String</span><span class="symbol">[]</span><span class="normal"> args</span><span class="symbol">)</span><span class="normal"> </span><span class="cbracket">{</span>
<span class="normal">        </span><span class="type">int</span><span class="normal"> count </span><span class="symbol">=</span><span class="normal"> </span><span class="number">0</span><span class="symbol">;</span><span class="normal">       </span><span class="comment">// number input values</span>
<span class="normal">        </span><span class="type">double</span><span class="normal"> sum </span><span class="symbol">=</span><span class="normal"> </span><span class="number">0.0</span><span class="symbol">;</span><span class="normal">    </span><span class="comment">// sum of input values</span>

<span class="normal">        </span><span class="comment">// read data and compute statistics</span>
<span class="normal">        </span><span class="keyword">while</span><span class="normal"> </span><span class="symbol">(!</span><span class="normal">StdIn</span><span class="symbol">.</span><span class="function">isEmpty</span><span class="symbol">())</span><span class="normal"> </span><span class="cbracket">{</span>
<span class="normal">            </span><span class="type">double</span><span class="normal"> value </span><span class="symbol">=</span><span class="normal"> StdIn</span><span class="symbol">.</span><span class="function">readDouble</span><span class="symbol">();</span>
<span class="normal">            sum </span><span class="symbol">+=</span><span class="normal"> value</span><span class="symbol">;</span>
<span class="normal">            count</span><span class="symbol">++;</span>
<span class="normal">        </span><span class="cbracket">}</span>

<span class="normal">        </span><span class="comment">// compute the average</span>
<span class="normal">        </span><span class="type">double</span><span class="normal"> average </span><span class="symbol">=</span><span class="normal"> sum </span><span class="symbol">/</span><span class="normal"> count</span><span class="symbol">;</span>

<span class="normal">        </span><span class="comment">// print results</span>
<span class="normal">        StdOut</span><span class="symbol">.</span><span class="function">println</span><span class="symbol">(</span><span class="string">"Average is "</span><span class="normal"> </span><span class="symbol">+</span><span class="normal"> average</span><span class="symbol">);</span>
<span class="normal">    </span><span class="cbracket">}</span>
<span class="cbracket">}</span>
</tt></pre>

<script type="text/javascript">
var gaJsHost = (("https:" == document.location.protocol) ? "https://ssl." : "http://www.");
document.write(unescape("%3Cscript src='" + gaJsHost + "google-analytics.com/ga.js' type='text/javascript'%3E%3C/script%3E"));
</script>
<script type="text/javascript">
try {
var pageTracker = _gat._getTracker("UA-10811519-2");
pageTracker._trackPageview();
} catch(err) {}</script>

</body>

<p><br><address><small>
Copyright &copy; 2000&ndash;2019, Robert Sedgewick and Kevin Wayne.
<br>Last updated: Thu Aug 11 07:59:46 EDT 2022.
</small></address>

</html>
