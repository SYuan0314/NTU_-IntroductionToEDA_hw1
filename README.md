## Input
input number of node\
input adjacency matrix\
input char which represent node 
## Output
output all possible topology order

## Example
![image](https://github.com/SYuan0314/NTU_IntroductionToEDA_hw1/assets/82447912/f823f4e4-f67b-4f6a-a51f-462e0b65e232)

```
Enter the number of vertices in the graph: 11
Enter the adjacency matrix:
0 1 0 0 0 0 0 0 0 0 0
0 0 1 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 1 0 1 0 0 0 0
1 0 0 0 0 0 0 1 0 0 0
0 0 1 0 1 0 1 0 0 0 0
0 0 0 0 0 0 0 0 0 0 1
0 0 0 0 0 0 0 0 1 0 0
0 0 0 0 0 0 0 0 0 0 0
0 0 1 0 0 1 0 0 0 0 1
0 0 0 0 0 0 0 1 1 0 0
Enter the labels for the vertices (characters):
A
B
C
D
E
F
G
H
I
J
K
```
```
All possible topological orders:
D J F E A B C G K H I
D J F E A B G C K H I
D J F E A B G K C H I
D J F E A B G K H C I
D J F E A B G K H I C
D J F E A G B C K H I
D J F E A G B K C H I
D J F E A G B K H C I
D J F E A G B K H I C
D J F E A G K B C H I
D J F E A G K B H C I
D J F E A G K B H I C
D J F E A G K H B C I
D J F E A G K H B I C
D J F E A G K H I B C
D J F E G A B C K H I
D J F E G A B K C H I
D J F E G A B K H C I
D J F E G A B K H I C
D J F E G A K B C H I
D J F E G A K B H C I
D J F E G A K B H I C
D J F E G A K H B C I
D J F E G A K H B I C
D J F E G A K H I B C
D J F E G K A B C H I
D J F E G K A B H C I
D J F E G K A B H I C
D J F E G K A H B C I
D J F E G K A H B I C
D J F E G K A H I B C
D J F E G K H A B C I
D J F E G K H A B I C
D J F E G K H A I B C
D J F E G K H I A B C
D J F G E A B C K H I
D J F G E A B K C H I
D J F G E A B K H C I
D J F G E A B K H I C
D J F G E A K B C H I
D J F G E A K B H C I
D J F G E A K B H I C
D J F G E A K H B C I
D J F G E A K H B I C
D J F G E A K H I B C
D J F G E K A B C H I
D J F G E K A B H C I
D J F G E K A B H I C
D J F G E K A H B C I
D J F G E K A H B I C
D J F G E K A H I B C
D J F G E K H A B C I
D J F G E K H A B I C
D J F G E K H A I B C
D J F G E K H I A B C
D J F G K E A B C H I
D J F G K E A B H C I
D J F G K E A B H I C
D J F G K E A H B C I
D J F G K E A H B I C
D J F G K E A H I B C
D J F G K E H A B C I
D J F G K E H A B I C
D J F G K E H A I B C
D J F G K E H I A B C
J D F E A B C G K H I
J D F E A B G C K H I
J D F E A B G K C H I
J D F E A B G K H C I
J D F E A B G K H I C
J D F E A G B C K H I
J D F E A G B K C H I
J D F E A G B K H C I
J D F E A G B K H I C
J D F E A G K B C H I
J D F E A G K B H C I
J D F E A G K B H I C
J D F E A G K H B C I
J D F E A G K H B I C
J D F E A G K H I B C
J D F E G A B C K H I
J D F E G A B K C H I
J D F E G A B K H C I
J D F E G A B K H I C
J D F E G A K B C H I
J D F E G A K B H C I
J D F E G A K B H I C
J D F E G A K H B C I
J D F E G A K H B I C
J D F E G A K H I B C
J D F E G K A B C H I
J D F E G K A B H C I
J D F E G K A B H I C
J D F E G K A H B C I
J D F E G K A H B I C
J D F E G K A H I B C
J D F E G K H A B C I
J D F E G K H A B I C
J D F E G K H A I B C
J D F E G K H I A B C
J D F G E A B C K H I
J D F G E A B K C H I
J D F G E A B K H C I
J D F G E A B K H I C
J D F G E A K B C H I
J D F G E A K B H C I
J D F G E A K B H I C
J D F G E A K H B C I
J D F G E A K H B I C
J D F G E A K H I B C
J D F G E K A B C H I
J D F G E K A B H C I
J D F G E K A B H I C
J D F G E K A H B C I
J D F G E K A H B I C
J D F G E K A H I B C
J D F G E K H A B C I
J D F G E K H A B I C
J D F G E K H A I B C
J D F G E K H I A B C
J D F G K E A B C H I
J D F G K E A B H C I
J D F G K E A B H I C
J D F G K E A H B C I
J D F G K E A H B I C
J D F G K E A H I B C
J D F G K E H A B C I
J D F G K E H A B I C
J D F G K E H A I B C
J D F G K E H I A B C
J F D E A B C G K H I
J F D E A B G C K H I
J F D E A B G K C H I
J F D E A B G K H C I
J F D E A B G K H I C
J F D E A G B C K H I
J F D E A G B K C H I
J F D E A G B K H C I
J F D E A G B K H I C
J F D E A G K B C H I
J F D E A G K B H C I
J F D E A G K B H I C
J F D E A G K H B C I
J F D E A G K H B I C
J F D E A G K H I B C
J F D E G A B C K H I
J F D E G A B K C H I
J F D E G A B K H C I
J F D E G A B K H I C
J F D E G A K B C H I
J F D E G A K B H C I
J F D E G A K B H I C
J F D E G A K H B C I
J F D E G A K H B I C
J F D E G A K H I B C
J F D E G K A B C H I
J F D E G K A B H C I
J F D E G K A B H I C
J F D E G K A H B C I
J F D E G K A H B I C
J F D E G K A H I B C
J F D E G K H A B C I
J F D E G K H A B I C
J F D E G K H A I B C
J F D E G K H I A B C
J F D G E A B C K H I
J F D G E A B K C H I
J F D G E A B K H C I
J F D G E A B K H I C
J F D G E A K B C H I
J F D G E A K B H C I
J F D G E A K B H I C
J F D G E A K H B C I
J F D G E A K H B I C
J F D G E A K H I B C
J F D G E K A B C H I
J F D G E K A B H C I
J F D G E K A B H I C
J F D G E K A H B C I
J F D G E K A H B I C
J F D G E K A H I B C
J F D G E K H A B C I
J F D G E K H A B I C
J F D G E K H A I B C
J F D G E K H I A B C
J F D G K E A B C H I
J F D G K E A B H C I
J F D G K E A B H I C
J F D G K E A H B C I
J F D G K E A H B I C
J F D G K E A H I B C
J F D G K E H A B C I
J F D G K E H A B I C
J F D G K E H A I B C
J F D G K E H I A B C
```
