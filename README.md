# Editorial-of-EURO_Challenge
Problem A:
Category: AdHoc
Converting D-M-A to three numbers (atoi in C++), Calculate all the combinations of D players over d , M players over m , A players over a.
The solution is g.C(d,D).C(m,M).C(a,A).
Problem B:
Category: AdHoc
To avoid any ambiguous, convert the string lines into lowercase only, and count the occurrences of the string TEAM in each line. 
Problem C :
Category: AdHoc
Use a 3 maps with key [teamx] and values: scored goals, difference.
Print it according to the teamx.
Problem D :
Category: AdHoc
Just like the previous problem, convert the map to vector, and sort them.
Problem E :
Category: AdHoc
Use the previous function of sorting and print only the 4 first names.
Problem F:
Category: AdHoc
Just count how many cases does L[i]/ATTMPT>=PRCT/100 
Use L[i]*100>=PRCT*ATTMPT to avoid floating precision. 
Problem G:
Category: Graph.
Vertices are the teams.
Edges are the ability to win.
Store the 16 teams in S[i].
Split the line into substrings indicating the teamB.
We use a adjacency matrix of map with keys teamA teamB when M[teamA][teamB] equals 1 if teamA is favorable over teamB, otherwise M[teamA][teamB]=0;
Compare M[S[i]][S[i+1]], erase the losing team, repeat it till the last to teams.



