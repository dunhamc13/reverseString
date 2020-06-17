/* reverse String
 * @Description: Practicing solving problems with arrays.  Given a string,
 * reverse it - but can't use reverse
 *
 * @Assumption: Ignore non alphanumeric and ignore case.
 * @Efficiency: Time = O(n), Space = O(1).
 */
#include <stdexcept>
#include <iostream>
using namespace std;

/* reverse string
 * @Description
 *    Takes a char array and reverses it
 * @Pre: Char array created and passed to function
 * @Post: array is reversed.
 * @Param: s, a char array
*/
void reverseString(vector<char>& s) {
      int left = 0, right = s.size() - 1;
      while (left < right) {
      char tmp = s[left];
      s[left++] = s[right];
      s[right--] = tmp;
      }//end while not middle
}//end reverseString


/* main driver
 * @Description
 *    Creates a string and reverses it.
 * @Pre: None
 * @Post: String created and then reversed.
*/
int main () {
   vector<char> test{h,e,l,l,o};
   cout << test << endl;
   reverseString(test);
   cout << test << endl;
   return 0;
}//end main
