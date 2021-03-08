
#include<iostream>
#include<string>
#include<stdexcept>
#include<stdio.h>
#include<vector>
using namespace std;
namespace ariel{

string snowman(int snow);
vector<int>splitdigit(int number);
int reversenum(int n);
//string nospaces(string input); 

bool all_chars_same(string testStr);
 

};
	

//bool string_is_rectangular();
  

    /*Test if a string occupies a rectangular area when printed, i.e.,
    all lines have the same length.
    >>> string_is_rectangular('')
    True
    >>> string_is_rectangular('asdf')
    True
    >>> string_is_rectangular('asdf\\nqwer')
    True
    >>> string_is_rectangular('asdf\\nqwert')
    False
  */
   // return all_equal(map(len, s.splitlines()))

//int string_join_horizontal(strings, between=''):
    /*Join a sequence of rectangular strings horizontally, preserving the
    layout of each string. All strings must have the same number of lines.
    Between two strings a column of `between` is inserted.
    */
  //  splitlines = str.splitlines
    //return '\n'.join(between.join(lines)
            //         for lines in zip(*map(splitlines, strings)))
