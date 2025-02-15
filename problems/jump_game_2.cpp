/*Step-by-Step Execution for nums = [1, 2, 1, 1, 1]
Index	nums[i]	max_reach	curr_end	count	Action
0	1	max(0, 0+1) = 1	0	0	No jump yet
0 (Jump)	-	-	1	1	First jump
1	2	max(1, 1+2) = 3	1	1	No jump yet
1 (Jump)	-	-	3	2	Second jump
2	1	max(3, 2+1) = 3	3	2	No jump yet
3	1	max(3, 3+1) = 4	3	2	No jump yet
3 (Jump)	-	-	4	3	Third jump, reached last index ✅*/
