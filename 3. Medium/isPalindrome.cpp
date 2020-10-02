/* Problem-Task : This function returns a boolean after checking whether the passed string is palindrome or not.
 * Problem Link : https://edabit.com/challenge/FSeXe93hxXFyJQpzN
*/

bool isPalindrome(std::string str) {
	int l=str.size(),x=0;
	int n=l-1;char s2[l];
	for(int i=0; i<l; ++i){
		str[i]=tolower(str[i]);
	}
	for(int i=0,k=0; i<l; ++i){
		if(str[i]>='a' && str[i]<='z'){s2[k]=str[i];++k;}
	}
	for(int i=0; i<l; ++i){
		if(s2[i]>='a' && s2[i]<='z'){++x;}
	}char s3[x];
	int l2=x;
	for(int i=0; i<l2; ++i){
		
		s3[i]=s2[i];
	}
	for(int i=0; i<l2; ++i,--x){
		
		if (s3[i]==s3[x-1]){}else{return false;}
	}
return true;
}
