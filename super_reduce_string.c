#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *superReduceString(char *s)
{
	int i;

	for(i=0;i<(strlen(s)-1) && s[i]!=0;i++)
	{
		if(s[i] == s[i+1])
		{
			memmove(s+i,s+i+2,strlen(s+i+2)+1);
			i--;
		}
		getchar();
		puts(s);
	}
	if(s[0]=='\0')
		return NULL;
	else
		return s;
}




int main()
{
	char s[100],*p;
	int i,j;
	gets(s);

	p=superReduceString(s);
	if(p==NULL)
		puts("Empty string");
	else
		puts(s);

}





/*


Reduce a string of lowercase characters in range ascii[‘a’..’z’]by doing a series of operations. In each operation, select a pair of adjacent letters that match, and delete them.

Delete as many characters as possible using this method and return the resulting string. If the final string is empty, return Empty String


Example:-
----------
1. input= "aab";

"aab" shortens to "b" in one operation: remove the adjacent a characters.

2. input= "aabb";

Remove the two 'b' characters leaving 'aa'. Remove the two 'a' characters to leave "". Return 'Empty String'.



Function Description:-
---------------------
Complete the superReducedString function in the editor below.

input format:-
-----------------
string s: a string to reduce


Returns:-
--------
string: the reduced string or Empty String




Sample Input-->0
-----------------
aaabccddd

Sample Output -->0
-------------------
abd


Explanation-->0
----------------
aaabccddd → abccddd → abddd → abd


Sample Input-->1
------------------
aa

Sample Output-->1
------------------
Empty String

Explanation-->1
-----------------
aa → Empty String



*/
