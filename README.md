#features_are_tests

#What are you talking about?

Let's assume we have some software, and that our software does some stuff.
Some people describe that stuff as <a href =https://en.wikipedia.org/wiki/Feature_model> features <a/>.
The problem is, as with all theroetical models, you never now how far the model is from reality.

#So what does this have to do with tests?

Tests (of any kind, unit, E2E, performance, whatever) can be seen a systematic way to describe use cases. When you execute a test, essentially you are forcing your software to function in a specific, well defined, way.
So <b>if your tests are designed properly</b> you can organize them in features and sub features like this:

arithmetic
* addition
* substraction
* multiplication
* division

The form of the tests does not matter, it can be _anything_. 
What does matter is that as long as we have our tests in a form that we can store in a computer, we can organize them into _directories_ and _directories have a tree structure_ . Now the most basic software feature model, is a tree structure. See where I'm going with this?

#And the reality part... ?
When tests are executed, they produce results of any kind depending on the software. 
But regardless of the software, as long as you have a compiler or interpreter that supports it, you can produce a common type of result which is the <b>code coverage</b>.
For example, gcc has a nice coverage tool gcov:
https://gcc.gnu.org/onlinedocs/gcc-4.3.4/gcc/Gcov.html#Gcov

Now suppose we save the code coverage files in a directory structure that follows our tests structure. 
What we have, is <b>a copy of the code, marked with all code lines that were executed per each of our model's features</b>. We marked our code line by line according to a feature model. 
And we did that in an indisputable way, because _tests don't lie_. 
They may not tell all the truth, or they may just not make sense.
But it is always guaranteed that each test executed some code and we know that code line by line. 
Code coverage is not a theoretical model that may or may not be correct, or up to date. It is always produced by a _real execution of the software_.

#...wouldn't it be cool if...
... we had a tool that can parse our code coverage results and produce a nice html dashboard with all our code, neatly colred and marked with all our feature tree information?

#this is what this project is about.











