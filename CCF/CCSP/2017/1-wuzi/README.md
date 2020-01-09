{{ self.title() }}

## {{ _('Description') }}

五子棋是世界智力运动会竞技项目之一，是一种两人对弈的纯策略型棋类游戏。通常双方分别使用黑白两色的棋子，下在棋盘直线与横线的交叉点上，先形成五子连珠者获胜。

五子连珠是在**横线，纵线，斜线，反斜线**四个方向上形成**五子及以上**的连线，当出现多于五子的连珠时，也只记为**一次**五子连珠。  

**五子连珠总数**等于棋局中的所有方向上的五子连珠连线的数量之和。 

我们想知道，给定一个长宽皆为 $n$ 的棋局，**白棋**落在哪些点可以**增加白棋五子连珠总数**？

对**增加白棋五子连珠总数**的举例说明(A点为我们选择的落点):

1 
```
wwwwAbbbb  
```
落白棋之前未形成五子连珠，落入白棋之后，五子连珠总数加一，满足要求。

2
```
wwwwwAbbbb
```
落白棋之前已经形成五子连珠，落白棋之后，五子连珠总数不变，不满足要求。

3
```
wwwwwAwwwww
```
落白棋之前五子连珠总数为二，落入白棋之后，两边连成一线，五子连珠总数减一，不满足要求。

4
```
*w***w*****		
**w**w*****
***w*w*****
****ww*****
wwwwwAwwwww
```
落白棋之前五子连珠总数为二。
落入白棋之后，两边连成一线，斜向和纵向形成新的五子连珠，总数为三。
五子连珠总数加一， 这个点满足要求。


## {{ _('Input Format') }}

{{ self.input_file() }}

输入为第一行为一个数字 $n$（$n \le {{ tools.hn(prob['args']['n']) }}$），表示棋盘大小。

接下来的 $n$ 行，每行为 $n$ 个字符，可能有三种字符，`*` 表示无棋子，`b` 表示黑棋，`w` 表示白棋。

输入棋局中可能**已经有五子连珠**的情况，我们需要计算能**增加白棋五子连珠总数**的白棋落点。


## {{ _('Output Format') }}

{{ self.output_file() }}

输出为 $k$ 行，包括 $k$ 个满足要求的落点，$k$ 个点按照**从左至右， 从上至下**的顺序输出， 即先按行排序， 再按列排序输出。

每行为一个点坐标 $x~y$，分别表示列坐标， 行坐标， 以空格分隔，坐标序号从 $0$ 开始，棋盘左上角为原点。

```
*a***
*****
*****
*****
***b*
```
图中 $a$ 点的坐标为 $1~0$， $b$ 点的坐标为 $3~4$。

{{ self.sample_text() }}

## {{ _('Subtasks') }}

{{ tbl('data') }}


