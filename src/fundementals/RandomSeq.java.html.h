<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html lang = "en">

<head>

<link rel="shortcut icon" href="https://algs4.cs.princeton.edu/favicon.ico">
<link rel="stylesheet"    href="https://algs4.cs.princeton.edu/java.css" type="text/css">

<title>RandomSeq.java</title>

<meta HTTP-EQUIV="Content-Type" CONTENT="text/html; charset=iso-8859-1">
<meta NAME="AUTHOR" CONTENT="Robert Sedgewick and Kevin Wayne">
<meta NAME="DESCRIPTION" CONTENT="RandomSeq code in Java">
<meta NAME="TITLE" CONTENT="RandomSeq code in Java">
<meta NAME="KEYWORDS" CONTENT="RandomSeq,java,programming,computer science,algorithm,data structure,program,code">
<meta NAME="ROBOTS" CONTENT="INDEX,FOLLOW">

</head>


<body>
<center><h1>RandomSeq.java</h1></center><p><br>

Below is the syntax highlighted version of <a href = "RandomSeq.java">RandomSeq.java</a>
from <a href = "https://algs4.cs.princeton.edu/11model">&#167;1.1 Programming Model</a>.
<p><br>

<!-- Generator: GNU source-highlight 3.1.8
by Lorenzo Bettini
http://www.lorenzobettini.it
http://www.gnu.org/software/src-highlite -->
<pre><tt><span class="comment">/******************************************************************************</span>
<span class="comment"> *  Compilation:  javac RandomSeq.java</span>
<span class="comment"> *  Execution:    java RandomSeq n lo hi</span>
<span class="comment"> *  Dependencies: StdOut.java</span>
<span class="comment"> *</span>
<span class="comment"> *  Prints N numbers between lo and hi.</span>
<span class="comment"> *</span>
<span class="comment"> *  % java RandomSeq 5 100.0 200.0</span>
<span class="comment"> *  123.43</span>
<span class="comment"> *  153.13</span>
<span class="comment"> *  144.38</span>
<span class="comment"> *  155.18</span>
<span class="comment"> *  104.02</span>
<span class="comment"> *</span>
<span class="comment"> ******************************************************************************/</span>

<span class="comment">/**</span>
<span class="comment"> *  The {</span><span class="type">@code</span><span class="comment"> RandomSeq} class is a client that prints out a pseudorandom</span>
<span class="comment"> *  sequence of real numbers in a given range.</span>
<span class="comment"> *  </span><span class="keyword">&lt;p&gt;</span>
<span class="comment"> *  For additional documentation, see </span><span class="keyword">&lt;a</span><span class="normal"> </span><span class="type">href</span><span class="symbol">=</span><span class="string">"https://algs4.cs.princeton.edu/11model"</span><span class="keyword">&gt;</span><span class="comment">Section 1.1</span><span class="keyword">&lt;/a&gt;</span><span class="comment"> of</span>
<span class="comment"> *  </span><span class="keyword">&lt;i&gt;</span><span class="comment">Algorithms, 4th Edition</span><span class="keyword">&lt;/i&gt;</span><span class="comment"> by Robert Sedgewick and Kevin Wayne.</span>
<span class="comment"> *</span>
<span class="comment"> *  </span><span class="type">@author</span><span class="comment"> Robert Sedgewick</span>
<span class="comment"> *  </span><span class="type">@author</span><span class="comment"> Kevin Wayne</span>
<span class="comment"> */</span>
<span class="keyword">public</span><span class="normal"> </span><span class="keyword">class</span><span class="normal"> </span><span class="classname">RandomSeq</span><span class="normal"> </span><span class="cbracket">{</span>

<span class="normal">    </span><span class="comment">// this class should not be instantiated</span>
<span class="normal">    </span><span class="keyword">private</span><span class="normal"> </span><span class="function">RandomSeq</span><span class="symbol">()</span><span class="normal"> </span><span class="cbracket">{</span><span class="normal"> </span><span class="cbracket">}</span>


<span class="normal">    </span><span class="comment">/**</span>
<span class="comment">     * Reads in two command-line arguments lo and hi and prints n uniformly</span>
<span class="comment">     * random real numbers in [lo, hi) to standard output.</span>
<span class="comment">     *</span>
<span class="comment">     * </span><span class="type">@param</span><span class="comment"> args the command-line arguments</span>
<span class="comment">     */</span>
<span class="normal">    </span><span class="keyword">public</span><span class="normal"> </span><span class="keyword">static</span><span class="normal"> </span><span class="type">void</span><span class="normal"> </span><span class="function">main</span><span class="symbol">(</span><span class="normal">String</span><span class="symbol">[]</span><span class="normal"> args</span><span class="symbol">)</span><span class="normal"> </span><span class="cbracket">{</span>

<span class="normal">        </span><span class="comment">// command-line arguments</span>
<span class="normal">        </span><span class="type">int</span><span class="normal"> n </span><span class="symbol">=</span><span class="normal"> Integer</span><span class="symbol">.</span><span class="function">parseInt</span><span class="symbol">(</span><span class="normal">args</span><span class="symbol">[</span><span class="number">0</span><span class="symbol">]);</span>

<span class="normal">        </span><span class="comment">// for backward compatibility with Intro to Programming in Java version of RandomSeq</span>
<span class="normal">        </span><span class="keyword">if</span><span class="normal"> </span><span class="symbol">(</span><span class="normal">args</span><span class="symbol">.</span><span class="normal">length </span><span class="symbol">==</span><span class="normal"> </span><span class="number">1</span><span class="symbol">)</span><span class="normal"> </span><span class="cbracket">{</span>
<span class="normal">            </span><span class="comment">// generate and print n numbers between 0.0 and 1.0</span>
<span class="normal">            </span><span class="keyword">for</span><span class="normal"> </span><span class="symbol">(</span><span class="type">int</span><span class="normal"> i </span><span class="symbol">=</span><span class="normal"> </span><span class="number">0</span><span class="symbol">;</span><span class="normal"> i </span><span class="symbol">&lt;</span><span class="normal"> n</span><span class="symbol">;</span><span class="normal"> i</span><span class="symbol">++)</span><span class="normal"> </span><span class="cbracket">{</span>
<span class="normal">                </span><span class="type">double</span><span class="normal"> x </span><span class="symbol">=</span><span class="normal"> StdRandom</span><span class="symbol">.</span><span class="function">uniformDouble</span><span class="symbol">(</span><span class="number">0.0</span><span class="symbol">,</span><span class="normal"> </span><span class="number">1.0</span><span class="symbol">);</span>
<span class="normal">                StdOut</span><span class="symbol">.</span><span class="function">println</span><span class="symbol">(</span><span class="normal">x</span><span class="symbol">);</span>
<span class="normal">            </span><span class="cbracket">}</span>
<span class="normal">        </span><span class="cbracket">}</span>

<span class="normal">        </span><span class="keyword">else</span><span class="normal"> </span><span class="keyword">if</span><span class="normal"> </span><span class="symbol">(</span><span class="normal">args</span><span class="symbol">.</span><span class="normal">length </span><span class="symbol">==</span><span class="normal"> </span><span class="number">3</span><span class="symbol">)</span><span class="normal"> </span><span class="cbracket">{</span>
<span class="normal">            </span><span class="type">double</span><span class="normal"> lo </span><span class="symbol">=</span><span class="normal"> Double</span><span class="symbol">.</span><span class="function">parseDouble</span><span class="symbol">(</span><span class="normal">args</span><span class="symbol">[</span><span class="number">1</span><span class="symbol">]);</span>
<span class="normal">            </span><span class="type">double</span><span class="normal"> hi </span><span class="symbol">=</span><span class="normal"> Double</span><span class="symbol">.</span><span class="function">parseDouble</span><span class="symbol">(</span><span class="normal">args</span><span class="symbol">[</span><span class="number">2</span><span class="symbol">]);</span>

<span class="normal">            </span><span class="comment">// generate and print n numbers between lo and hi</span>
<span class="normal">            </span><span class="keyword">for</span><span class="normal"> </span><span class="symbol">(</span><span class="type">int</span><span class="normal"> i </span><span class="symbol">=</span><span class="normal"> </span><span class="number">0</span><span class="symbol">;</span><span class="normal"> i </span><span class="symbol">&lt;</span><span class="normal"> n</span><span class="symbol">;</span><span class="normal"> i</span><span class="symbol">++)</span><span class="normal"> </span><span class="cbracket">{</span>
<span class="normal">                </span><span class="type">double</span><span class="normal"> x </span><span class="symbol">=</span><span class="normal"> StdRandom</span><span class="symbol">.</span><span class="function">uniformDouble</span><span class="symbol">(</span><span class="normal">lo</span><span class="symbol">,</span><span class="normal"> hi</span><span class="symbol">);</span>
<span class="normal">                StdOut</span><span class="symbol">.</span><span class="function">printf</span><span class="symbol">(</span><span class="string">"%.2f</span><span class="specialchar">\n</span><span class="string">"</span><span class="symbol">,</span><span class="normal"> x</span><span class="symbol">);</span>
<span class="normal">            </span><span class="cbracket">}</span>
<span class="normal">        </span><span class="cbracket">}</span>

<span class="normal">        </span><span class="keyword">else</span><span class="normal"> </span><span class="cbracket">{</span>
<span class="normal">            </span><span class="keyword">throw</span><span class="normal"> </span><span class="keyword">new</span><span class="normal"> </span><span class="function">IllegalArgumentException</span><span class="symbol">(</span><span class="string">"Invalid number of arguments"</span><span class="symbol">);</span>
<span class="normal">        </span><span class="cbracket">}</span>
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
Copyright &copy; 2000&ndash;2022, Robert Sedgewick and Kevin Wayne.
<br>Last updated: Thu Aug 11 09:52:01 EDT 2022.
</small></address>

</html>
