://www.reddit.com/r/dailyprogrammer/comments/3twuwf/20151123_challenge_242_easy_funny_plant/

A plant produces fruit.
Each plant produces fruit every week equal to its age in weeks.
You can plant a fruit to make a new plant (produces 1 fruit the next week).

One feeds 1 person for a week.

given an arbitrary number of people and plants to start
how many weeks before the plants can feed all of the people

1- 1 ; 2 + 1 ; 

# of new plants 1, 1, 3, 8, 

SOLUTION:
Notice that the sequence here is a fibbonacci sequence/

Fruit -> Plants -> Fruit -> Plants

I find this easiest to see from the number of fruit I get. 
If I get _x_ fruit on a step. I will plant all of them.
Therefore, the number of plants I get will be _x_ + the number of plants I had

NOW, the number of fruit I pick up will depend on how many plants generated them.

If i pick N fruit, I get the same N fruit. Plus an additional one for each plant I have.





