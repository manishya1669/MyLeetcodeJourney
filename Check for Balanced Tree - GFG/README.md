# Check for Balanced Tree
## Easy 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given a binary tree, find if it is height balanced or not.&nbsp;<br>
A tree is height balanced if difference between heights of left and right subtrees is <strong>not more than one</strong> for all nodes of tree.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>A height balanced tree</strong><br>
&nbsp; &nbsp; &nbsp; &nbsp; 1<br>
&nbsp; &nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp; 10&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 39<br>
&nbsp; /<br>
5</span></p>

<p><span style="font-size:18px"><strong>An unbalanced tree</strong><br>
&nbsp; &nbsp; &nbsp; &nbsp; 1<br>
&nbsp; &nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;<br>
&nbsp;&nbsp; 10&nbsp;&nbsp;&nbsp;<br>
&nbsp; /<br>
5</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1
 &nbsp;&nbsp;&nbsp;/
&nbsp;&nbsp; 2
 &nbsp; &nbsp;\
 &nbsp; &nbsp; 3&nbsp;
<strong>Output: </strong>0<strong>
Explanation: </strong>The max difference in height
of left subtree and right subtree is 2,
which is greater than 1. Hence unbalanced</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10
 &nbsp;&nbsp;&nbsp;&nbsp;/&nbsp;&nbsp; \
 &nbsp;&nbsp;&nbsp;20&nbsp;&nbsp; 30 
&nbsp;&nbsp;/&nbsp;&nbsp; \
 40&nbsp;&nbsp; 60
<strong>Output:</strong> 1<strong>
Explanation: </strong>The max difference in height
of left subtree and right subtree is 1.
Hence balanced.<strong> </strong></span>
</pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to take input. Just complete the function<strong> isBalanced() </strong>that takes root <strong>node </strong>as parameter and returns <strong>true, </strong>if the tree is balanced else returns <strong>false</strong>.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= Number of nodes &lt;= 10<sup>5</sup><br>
0 &lt;= Data of a node &lt;= 10<sup>6</sup></span></p>

<p><span style="font-size:18px"><strong>Expected time complexity:&nbsp;</strong>O(N)</span><br>
<span style="font-size:18px"><strong>Expected auxiliary space:&nbsp;</strong>O(h) , where h = height of tree</span></p>
 <p></p>
            </div>