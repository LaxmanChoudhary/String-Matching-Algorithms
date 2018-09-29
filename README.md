# String Matching Algorithms

###   Finding the occurence of a string in a cluster of words is what needed in a lot of programs, whether related to data analysis, text searching, and so on. We can take the cluster of words as a text document containing many number of a strings and a specific word is given to be searched among the document. 

###  The string matching algorithms has a lot of applications in multiple areas. First, an adapted and efficient algorithms can help to enhance the responsiveness of text editing software. Other applications in Information Technology includes : 
* Web search engines,
* Spam filters,
* Natural language processing,
* Searching of particular pattern in DNA,
* Feature detection in images.

###   While applying a searching algorithm the two main elements that are taken care of are :
* **Text** - The string of text where the word is to be searched.
* **Pattern** - The word the needs to be looked over or searched for.

![String Matching](http://www.stoimen.com/blog/wp-content/uploads/2012/03/ThirdStepBruteforcestringmatching.png)

### When working with a string matching algorithm, here are some notations :
* the alphabet, ∑ , is a finite set of symbols (i.e. we expect the text to be finite set of strings)
* the string from where to search, is *the text* T and the length of |T| = n
* the string that is to be searched, *the pattern* P, length of |P| = m
#### It must be clear that the problem must consist of n >= m, otherwise it would not make any sense.
#### The string must be taken as the array of characters like
```
it is a item
```
 so while matching the strings, it is taken as array of characters
 
0|1|2|3|4|5|6|7|8|9|10|11|
-|-|-|-|-|-|-|-|-|-|-|-|
i|t| |i|s| |a| |i|t|e|m|

## So, what do we expect from a string matching algorithms ?
* Int value termed as **s** *(valid shift)*, that marks the occurence of the patterns in Text

### We will dive into number of string matching algrithms, each module consists of following :
  * **Theory**
    * Description
    * Merits and Demerits
    * Analysis
  * **Program Implementation**
