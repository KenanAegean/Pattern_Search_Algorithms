# AdvancedAalgorithn-Proj1

Deadline: 30.04.2022 23.59

* Part One - for mark 3

Implement the following pattern matching algorithms: Brute-force, Sunday, KMP, FSM, Rabin-Karp.
Compare their running times using chapters of a book, with a small and a large pattern. Your report should contain some description of the algorithms and, most importantly, your findings.
Include a graph showing the relation of RT against the text length. (This implies that you have to use several different lengths.)
The results should be reproducible.

** "Wacky Races" - for mark 4

Prove empirically that there can be situations in which
- Sunday is at least twice as fast as Brute-force
- Sunday is at least twice as fast as KMP
- KMP is at least twice as fast as Rabin-Karp
- Rabin-Karp is at least twice as fast as Sunday
It means that you should present a specific P, a specific T for this happens.
T should be at least 100kB long.
The results should be reproducible.


*** "Jewish-style carp" for mark 5
Devise a version of Rabin-Karp algorithm which will check if for a given
picture M by N pixels large its top-right
K by K corner is duplicated somewhere
in the picture.
Your algorithm should replace slow modulo prime operations with faster bitwise 
mask &'s. Do make sure that the RT
is at most linear in the number of pixels in the text (in the same sense as in the classical RK).
Here, picture is a two-dimensional array of arbitrary items.



NOTE:
The main part of your work is the report, rather then the code itself (except for the "carp", where both are important).
Completing the first task is neccessary to get a positive mark.


Remember that you have to talk to me about your work before you get your credit.
If you are not after mark 4, 4+ or 5 as your final mark you can be a LITTLE late.
Please attach the project file/files to an email. I use your assignment emails as a means of archiving.
If you want to use a compression software, use zip.
You may skip executables.
