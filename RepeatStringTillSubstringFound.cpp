#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string str = "abcd";
	string sub_str = "cdabcdabcd";
	
	string new_str;
	
	int i=1, str_len = str.length(), sub_str_len = sub_str.length();
	int temp_len = str_len;
	while(str_len <= sub_str_len) {
	    str_len += temp_len;
	    i++;
	}
	
	for(int j=0;j<i;j++) {
	    new_str.append(str);
	}
	
	int sub_str_start_pos = new_str.find(sub_str[0]);
	string new_sub_str = new_str.substr(sub_str_start_pos, sub_str_len);
	
	if(sub_str == new_sub_str) {
	    cout << "Substring exists !" << endl;
	} else {
	    cout << "Substring does not exist !" << endl;
	}

	return 0;
}
