# Children Sum Parent
## Easy 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given a Binary Tree. Check whether all of its nodes have the value equal to the sum of their child nodes.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>     10
    /
  10 
<strong>Output: </strong>1<strong>
Explanation: </strong>Here, every node is sum of
its left and right child.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>       1
     /   \
&nbsp;   4     3
&nbsp;  /  \
&nbsp; 5    N
<strong>Output: </strong>0<strong>
Explanation: </strong>Here, 1 is the root node
and 4, 3 are its child&nbsp;nodes. 4 + 3 =
7 which is not equal to the value of
root node. Hence, this tree does not
satisfy the given conditions.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function</span><span style="font-size:18px"> <strong>isSumProperty</strong>() that takes the root Node of the Binary Tree as input and returns 1 if all the nodes in the tree satisfy the following properties. Else, it returns 0.<br>
For every node, data value must be equal to the&nbsp;sum of data values in left and right children. Consider data value as 0 for NULL child.&nbsp; Also, leaves are considered to follow the property.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexiy:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= Data on nodes &lt;= 10<sup>5</sup></span></p>
 <p></p>
            </div>