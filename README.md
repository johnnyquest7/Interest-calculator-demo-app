# Interest-calculator-demo-app
This app calculates interest over time, given a few initial fields such as deposit amount and time. 



    Summarize the project and what problem it was solving.
 This app was made to measure how much interest an account would accrue given an amount of time to appreciate. 
 There are options to calculate for extra monthly payments as well.

    
    What did you do particularly well?
I feel like I made the information clear and easy to grasp despite it being limited to a command line output. 
    
    Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
I would start by revising the underlying maths and expand upon the accuracy of the program. When very large numbers are used the program has a hard time
outputting a good looking table to present more decimal places. I would also likely change the inital information input to have more possible inputs or
selecting how many tables you wanted to setup.
  
    Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
The portion of code that dealt with the output of the program took me many tries to get right. Making the tables the way I did was very trial and error. I overcame it by 
being stubborn and trying different things. I looked up examples online, the ones that helped were the cout modifiers like setprecision and fill. Those functions made it all 
possible in the first place.
    
    What skills from this project will be particularly transferable to other projects or course work?
This project helped build up my skills with using mathematics in code. Useful for translating financial information into full fledged data sets. 
    
    How did you make this program maintainable, readable, and adaptable?
By setting up a class called Investment I provided a template to work with, If I needed another similar calculation or data set, I could 
make a subclass very easily to expand my program. This way of organization also makes the code easier to read, by breaking up the elements of the
class someone reviewing the code can clearly see the different pieces that come together in main(). 
